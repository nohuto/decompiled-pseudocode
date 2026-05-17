/*
 * XREFs of _RtlFindLongestRunClear@8 @ 0x4B34ED10
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFindClearRuns@16 @ 0x4B34E950 (_RtlFindClearRuns@16.c)
 */

int __stdcall RtlFindLongestRunClear(_DWORD *a1, _DWORD *a2)
{
  _DWORD v3[2]; // [esp+0h] [ebp-8h] BYREF

  if ( RtlFindClearRuns(a1, (int)v3, 1u, 1) == 1 )
  {
    *a2 = v3[0];
    return v3[1];
  }
  else
  {
    *a2 = 0;
    return 0;
  }
}
