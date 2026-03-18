/*
 * XREFs of GreScalingDispatchEscape @ 0x1C029F894
 * Callers:
 *     NtGdiExtEscape @ 0x1C0015550 (NtGdiExtEscape.c)
 * Callees:
 *     GreEscCreateScaledCompatibleBitmap @ 0x1C029F458 (GreEscCreateScaledCompatibleBitmap.c)
 */

__int64 __fastcall GreScalingDispatchEscape(_OWORD *a1)
{
  ULONG64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  v5 = 0LL;
  if ( ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v2 = (ULONG64)(a1 + 2);
  if ( v2 > MmUserProbeAddress || v2 < (unsigned __int64)a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v4 = *a1;
  v5 = a1[1];
  if ( (_DWORD)v4 )
    return 3221225659LL;
  GreEscCreateScaledCompatibleBitmap((__int64)&v4);
  if ( !(_DWORD)v4 )
  {
    ProbeForWrite((char *)a1 + 8, 8uLL, 4u);
    *((_QWORD *)a1 + 1) = *((_QWORD *)&v4 + 1);
  }
  return 0LL;
}
