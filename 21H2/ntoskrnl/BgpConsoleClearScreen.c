/*
 * XREFs of BgpConsoleClearScreen @ 0x1409F66E0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x14039C2A8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039C2F8 (BgpFwAcquireLock.c)
 *     BgpConsoleClearScreenEx @ 0x1409F6718 (BgpConsoleClearScreenEx.c)
 */

__int64 BgpConsoleClearScreen()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  unsigned int v3; // ebx

  BgpFwAcquireLock();
  if ( qword_140CDB158 )
    v3 = BgpConsoleClearScreenEx(v1, v0, v2);
  else
    v3 = -1073741823;
  BgpFwReleaseLock();
  return v3;
}
