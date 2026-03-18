/*
 * XREFs of NVMeBuildDevicePollingConfiguration @ 0x1C0016710
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 */

char __fastcall NVMeBuildDevicePollingConfiguration(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v3; // rdx
  _DWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx
  int v8; // eax

  SrbExtension = GetSrbExtension(a2);
  v6 = SrbExtension;
  if ( v4 )
  {
    LOBYTE(SrbExtension) = *(_BYTE *)(v3 + 3);
    if ( (_BYTE)SrbExtension == 1 && *v4 == 1313882949 )
    {
      v7 = *(_QWORD *)(v5 + 1704);
      LOWORD(SrbExtension) = *(_WORD *)v7;
      *(_WORD *)(v5 + 3816) = *(_WORD *)v7;
      if ( (_WORD)SrbExtension == 256 )
      {
        v8 = *(unsigned __int16 *)(v7 + 2);
        *(_DWORD *)(v5 + 3820) = v8;
        if ( v8 )
          *(_BYTE *)(v5 + 3800) = 1;
        *(_DWORD *)(v5 + 3824) = *(_DWORD *)(v7 + 4);
        LODWORD(SrbExtension) = *(_DWORD *)(v7 + 8);
        *(_DWORD *)(v5 + 3828) = SrbExtension;
      }
    }
  }
  *(_BYTE *)(v6 + 4253) |= 8u;
  return SrbExtension;
}
