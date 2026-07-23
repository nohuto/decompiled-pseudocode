/*
 * XREFs of BgpConsoleGetState @ 0x1409F7D50
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x14039C3F8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039C448 (BgpFwAcquireLock.c)
 */

__int64 __fastcall BgpConsoleGetState(_DWORD *a1)
{
  _DWORD *v2; // rdx
  unsigned int v3; // ebx

  BgpFwAcquireLock();
  v2 = (_DWORD *)qword_140CDB198;
  v3 = 0;
  if ( qword_140CDB198 )
  {
    *a1 = *(_DWORD *)(qword_140CDB198 + 20);
    a1[1] = v2[6];
    a1[2] = *v2;
    a1[3] = v2[1];
    a1[4] = v2[12];
    a1[5] = v2[13];
    a1[6] = v2[15];
    a1[7] = v2[16];
  }
  else
  {
    v3 = -1073741823;
  }
  BgpFwReleaseLock();
  return v3;
}
