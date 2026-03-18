/*
 * XREFs of MiAllowImageMap @ 0x1406F884C
 * Callers:
 *     MiMapViewOfImageSection @ 0x1406F9990 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140280D08 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140281750 (MiReferenceControlAreaFile.c)
 *     MiGetControlAreaLoadConfig @ 0x140281A3C (MiGetControlAreaLoadConfig.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     SeGetTrustLabelAce @ 0x1402FBE30 (SeGetTrustLabelAce.c)
 *     SeQueryMandatoryLabel @ 0x1406C9990 (SeQueryMandatoryLabel.c)
 *     MiReferenceFileObjectForMap @ 0x1406FC03C (MiReferenceFileObjectForMap.c)
 *     ObReleaseObjectSecurityEx @ 0x140722890 (ObReleaseObjectSecurityEx.c)
 *     ObpGetObjectSecurity @ 0x1407248C0 (ObpGetObjectSecurity.c)
 *     PsBlockNonCetBinaries @ 0x1409AD258 (PsBlockNonCetBinaries.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1409E7418 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwpTimLogMitigationForProcess @ 0x1409E8BEC (EtwpTimLogMitigationForProcess.c)
 */

__int64 __fastcall MiAllowImageMap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  bool v8; // al
  int v9; // edi
  _DWORD *ControlAreaLoadConfig; // rax
  int ObjectSecurity; // ebx
  int v12; // ebp
  bool v13; // al
  unsigned __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rax
  void *v20; // rbx
  __int64 *v21; // r8
  bool v22; // di
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  int v27; // edi
  __int64 v28[7]; // [rsp+20h] [rbp-38h] BYREF
  char v29; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(a1 + 2512);
  v28[0] = 0LL;
  v8 = (v4 & 0x100000) != 0;
  v9 = v4 & 0x80000;
  if ( (v4 & 0x80000) != 0 )
    v8 = 1;
  if ( v8 && (*(_BYTE *)(a2 + 40) & 3) != 0 )
  {
    v19 = MiReferenceFileObjectForMap(a2);
    v20 = (void *)v19;
    if ( (*(_DWORD *)(*(_QWORD *)(v19 + 8) + 52LL) & 0x80000) == 0 )
    {
      v21 = MITIGATION_AUDIT_PROHIBIT_REMOTE_IMAGE_MAP;
      if ( v9 )
        v21 = MITIGATION_ENFORCE_PROHIBIT_REMOTE_IMAGE_MAP;
      EtwpTimLogMitigationForProcess(1LL, (unsigned int)(v9 != 0) + 1, v21, a1);
      if ( v9 )
      {
        ObfDereferenceObject(v20);
        return 3221225506LL;
      }
    }
    ObfDereferenceObject(v20);
  }
  if ( !*(_BYTE *)(a4 + 50) )
    goto LABEL_7;
  ControlAreaLoadConfig = (_DWORD *)MiGetControlAreaLoadConfig(a3);
  if ( (*(_DWORD *)(a1 + 2512) & 4) != 0 && (!ControlAreaLoadConfig || (*ControlAreaLoadConfig & 1) == 0) )
    return 3221227014LL;
  if ( (*(_DWORD *)(a1 + 2516) & 0x200000) == 0 )
    goto LABEL_7;
  v22 = 0;
  if ( ControlAreaLoadConfig )
    v22 = (*(_BYTE *)ControlAreaLoadConfig & 0x40) != 0;
  v23 = MiReferenceControlAreaFile(a3);
  LOBYTE(v24) = v22;
  v25 = v23;
  v26 = *(_QWORD *)(*(_QWORD *)a3 + 56LL);
  LOBYTE(v26) = *(_BYTE *)(v26 + 76) & 1;
  v27 = PsBlockNonCetBinaries(a1, v26, v24, v23 + 88);
  MiDereferenceControlAreaFile(a3, v25);
  if ( v27 >= 0 )
  {
LABEL_7:
    ObjectSecurity = 0;
    v12 = v4 & 0x200000;
    v13 = (v4 & 0x400000) != 0;
    if ( (v4 & 0x200000) != 0 )
      v13 = 1;
    if ( !v13 )
      return (unsigned int)ObjectSecurity;
    v29 = 0;
    v15 = MiReferenceControlAreaFile(a3);
    ObjectSecurity = ObpGetObjectSecurity(v15, v28, &v29, 0LL);
    if ( ObjectSecurity < 0 )
    {
      ObjectSecurity = -1073741790;
    }
    else
    {
      v16 = v28[0];
      if ( (unsigned int)SeQueryMandatoryLabel(v28[0]) <= 0x1000 && !SeGetTrustLabelAce(v16) )
        ObjectSecurity = -1073741790;
      LOBYTE(v17) = v29;
      ObReleaseObjectSecurityEx(v16, v17, v15, v18);
      if ( ObjectSecurity != -1073741790 )
        goto LABEL_16;
    }
    EtwTimLogProhibitLowILImageMap((unsigned int)(v12 != 0) + 1, a1, v15 + 88);
    if ( !v12 )
      ObjectSecurity = 0;
LABEL_16:
    MiDereferenceControlAreaFile(a3, v15);
    return (unsigned int)ObjectSecurity;
  }
  return (unsigned int)v27;
}
