/*
 * XREFs of ?Translate@CApiPortClient@@CAJJ@Z @ 0x18000B400
 * Callers:
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x18000B454 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z @ 0x18000B5B8 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000B85C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApiPortClient::Translate(unsigned int a1)
{
  int v1; // edx
  unsigned __int64 v2; // rax
  __int64 v3; // rdx

  if ( a1 == -2003303402 )
    return (unsigned int)-2144980991;
  if ( a1 + 805306334 <= 0x1F )
  {
    v1 = -2145124351;
    if ( _bittest(&v1, a1 + 805306334) )
      return (unsigned int)-2144980991;
  }
  v2 = a1 + 805305825;
  if ( (unsigned int)v2 <= 0x34 )
  {
    v3 = 0x10000000000041LL;
    if ( _bittest64(&v3, v2) )
      return (unsigned int)-2144980991;
  }
  return a1;
}
