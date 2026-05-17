/*
 * XREFs of _RtlpSysVolCheckOwnerAndSecurity@8 @ 0x4B35DAEE
 * Callers:
 *     _RtlCreateSystemVolumeInformationFolder@4 @ 0x4B35D890 (_RtlCreateSystemVolumeInformationFolder@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlEqualSid@8 @ 0x4B2D85D0 (_RtlEqualSid@8.c)
 *     _RtlSetDaclSecurityDescriptor@16 @ 0x4B2D8610 (_RtlSetDaclSecurityDescriptor@16.c)
 *     _RtlSetOwnerSecurityDescriptor@12 @ 0x4B2D86E0 (_RtlSetOwnerSecurityDescriptor@12.c)
 *     _RtlGetDaclSecurityDescriptor@16 @ 0x4B2E5690 (_RtlGetDaclSecurityDescriptor@16.c)
 *     _RtlMakeSelfRelativeSD@12 @ 0x4B2E6A30 (_RtlMakeSelfRelativeSD@12.c)
 *     _RtlGetAce@12 @ 0x4B2EA0A0 (_RtlGetAce@12.c)
 *     _RtlGetOwnerSecurityDescriptor@12 @ 0x4B2EAA80 (_RtlGetOwnerSecurityDescriptor@12.c)
 *     _NtQuerySecurityObject@20 @ 0x4B2F3F30 (_NtQuerySecurityObject@20.c)
 *     _NtSetSecurityObject@12 @ 0x4B2F43F0 (_NtSetSecurityObject@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlSelfRelativeToAbsoluteSD2@8 @ 0x4B345B10 (_RtlSelfRelativeToAbsoluteSD2@8.c)
 */

int __fastcall RtlpSysVolCheckOwnerAndSecurity(int a1, int a2)
{
  char *Heap; // esi
  int SecurityObject; // edi
  unsigned int i; // ebx
  _BYTE *v7; // edi
  char v8; // al
  int SelfRelativeSD; // eax
  char *v10; // eax
  char *v11; // edi
  int v12; // ebx
  int v13; // esi
  _BYTE *v16; // [esp+14h] [ebp-4Ch] BYREF
  void *Buf1; // [esp+18h] [ebp-48h] BYREF
  int v18; // [esp+1Ch] [ebp-44h] BYREF
  char v19; // [esp+21h] [ebp-3Fh] BYREF
  bool v20; // [esp+22h] [ebp-3Eh] BYREF
  bool v21; // [esp+23h] [ebp-3Dh] BYREF
  size_t Size; // [esp+24h] [ebp-3Ch] BYREF
  int v23; // [esp+28h] [ebp-38h] BYREF
  __int16 v24; // [esp+2Ch] [ebp-34h] BYREF
  int v25; // [esp+2Eh] [ebp-32h]
  __int16 v26; // [esp+32h] [ebp-2Eh]
  int v27; // [esp+34h] [ebp-2Ch]
  __int16 Buf2; // [esp+44h] [ebp-1Ch] BYREF
  int v29; // [esp+46h] [ebp-1Ah]
  __int16 v30; // [esp+4Ah] [ebp-16h]
  int v31; // [esp+4Ch] [ebp-14h]
  int v32; // [esp+50h] [ebp-10h]

  v18 = 0;
  if ( NtQuerySecurityObject(a1, 5, 0, 0, (int)&Size) != -1073741789 )
    return 0;
  Heap = (char *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, Size);
  if ( !Heap )
    return -1073741670;
  SecurityObject = NtQuerySecurityObject(a1, 5, (int)Heap, Size, (int)&Size);
  if ( SecurityObject < 0 )
    goto LABEL_6;
  SecurityObject = RtlGetDaclSecurityDescriptor((int)Heap, &v21, &v18, &v20);
  if ( SecurityObject < 0 )
    goto LABEL_6;
  SecurityObject = RtlGetOwnerSecurityDescriptor((int)Heap, (int *)&Buf1, &v19);
  if ( SecurityObject < 0 )
    goto LABEL_6;
  v24 = 257;
  v25 = 0;
  v26 = 1280;
  v27 = 18;
  Buf2 = 513;
  v29 = 0;
  v30 = 1280;
  v31 = 32;
  v32 = 544;
  if ( Buf1 && RtlEqualSid((unsigned __int8 *)Buf1, &Buf2) && v21 && v18 )
  {
    for ( i = 0; ; ++i )
    {
      if ( RtlGetAce(v18, i, &v16) >= 0 )
      {
        v7 = v16;
      }
      else
      {
        v7 = 0;
        v16 = 0;
      }
      if ( !v7 )
        break;
      if ( !*v7 && RtlEqualSid(v7 + 8, &v24) )
      {
        v8 = v7[1];
        if ( (v8 & 1) != 0 && (v8 & 2) != 0 )
        {
          SecurityObject = 0;
          goto LABEL_6;
        }
        v7[1] = v8 | 3;
        SelfRelativeSD = NtSetSecurityObject(a1, 4, (int)Heap);
        goto LABEL_30;
      }
    }
  }
  v23 = Size;
  if ( RtlSelfRelativeToAbsoluteSD2((int)Heap, &v23) == -1073741789 )
  {
    v10 = (char *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, v23);
    v11 = v10;
    if ( !v10 )
      goto LABEL_34;
    memcpy(v10, Heap, Size);
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Heap);
    Heap = v11;
    Size = v23;
    v12 = RtlSelfRelativeToAbsoluteSD2((int)v11, &Size);
    if ( v12 < 0 )
    {
LABEL_28:
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v11);
      return v12;
    }
  }
  SelfRelativeSD = RtlSetOwnerSecurityDescriptor((int)Heap, (int)&Buf2, 0);
  if ( SelfRelativeSD < 0
    || (SelfRelativeSD = RtlSetDaclSecurityDescriptor((int)Heap, 1, a2, 0), SelfRelativeSD < 0)
    || (v23 = 0, SelfRelativeSD = RtlMakeSelfRelativeSD(Heap, 0, (size_t *)&v23), SelfRelativeSD != -1073741789) )
  {
LABEL_30:
    SecurityObject = SelfRelativeSD;
LABEL_6:
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Heap);
    return SecurityObject;
  }
  v11 = (char *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, v23);
  if ( !v11 )
  {
LABEL_34:
    SecurityObject = -1073741670;
    goto LABEL_6;
  }
  v12 = RtlMakeSelfRelativeSD(Heap, v11, (size_t *)&v23);
  RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Heap);
  if ( v12 < 0 )
    goto LABEL_28;
  Size = v23;
  v13 = NtSetSecurityObject(a1, 5, (int)v11);
  RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v11);
  return v13;
}
