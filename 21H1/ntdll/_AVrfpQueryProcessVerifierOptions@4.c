/*
 * XREFs of _AVrfpQueryProcessVerifierOptions@4 @ 0x4B339457
 * Callers:
 *     _RtlQueryProcessDebugInformation@12 @ 0x4B336B50 (_RtlQueryProcessDebugInformation@12.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _RtlpCommitQueryDebugInfo@8 @ 0x4B3378A8 (_RtlpCommitQueryDebugInfo@8.c)
 *     _RtlpDeCommitQueryDebugInfo@12 @ 0x4B3379F5 (_RtlpDeCommitQueryDebugInfo@12.c)
 */

int __thiscall AVrfpQueryProcessVerifierOptions(_DWORD *this)
{
  int v3; // esi
  char *DebugInfo; // edi
  unsigned int v5; // ecx
  int (__thiscall *v6)(_DWORD, _DWORD, unsigned int *, char *); // esi
  unsigned int v7; // [esp+4h] [ebp-8h] BYREF
  unsigned int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x2000100) == 0 )
    return 0;
  v3 = dword_4B3A3794(dword_4B3A3794, 0, &v8, 0);
  if ( v3 == -1073741820 )
  {
    DebugInfo = RtlpCommitQueryDebugInfo(this, v8);
    if ( DebugInfo )
    {
      v5 = v8;
      v6 = (int (__thiscall *)(_DWORD, _DWORD, unsigned int *, char *))dword_4B3A3794;
      v7 = v8;
      *((_DWORD *)DebugInfo + 1) = 0;
      *(_DWORD *)DebugInfo = v5;
      v3 = v6(v6, 0, &v7, DebugInfo);
      if ( v3 >= 0 )
        this[18] = DebugInfo;
      else
        RtlpDeCommitQueryDebugInfo((int)this, (int)DebugInfo, v8);
    }
    else
    {
      return -1073741801;
    }
  }
  return v3;
}
