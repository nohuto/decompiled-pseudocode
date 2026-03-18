/*
 * XREFs of ?ProcessComplexCoalescence@@YGHIIIJPAIPAJ@Z @ 0x141B63
 * Callers:
 *     _ProcessSuspendedSendMessage@20 @ 0xAB210 (_ProcessSuspendedSendMessage@20.c)
 *     _ProcessSuspendedEventMessage@24 @ 0xADCB2 (_ProcessSuspendedEventMessage@24.c)
 *     _ProcessSuspendedPostMessage@20 @ 0xADCD4 (_ProcessSuspendedPostMessage@20.c)
 * Callees:
 *     <none>
 */

BOOL __userpurge ProcessComplexCoalescence@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        unsigned int a3,
        unsigned int a4,
        int *a5,
        _DWORD *a6,
        unsigned int *a7,
        int *a8)
{
  int v8; // ecx
  int v9; // eax
  bool v10; // zf

  v8 = a2 - 2;
  if ( !v8 )
  {
    if ( a3 != *a5 )
      return 1;
    v10 = a4 == *a6;
    return !v10;
  }
  if ( v8 != 1 )
  {
    *a5 = a3;
LABEL_4:
    *a6 = a4;
    return 0;
  }
  v9 = *a5;
  if ( a1 == 536 )
  {
    if ( v9 != a3 || (a3 & 0x8000) != 0 )
      return 1;
    v10 = *a6 == a4;
    return !v10;
  }
  if ( !v9 && !a3 )
  {
    *a5 = 0;
    goto LABEL_4;
  }
  return 1;
}
