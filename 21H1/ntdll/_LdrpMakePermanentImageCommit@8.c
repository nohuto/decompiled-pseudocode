/*
 * XREFs of _LdrpMakePermanentImageCommit@8 @ 0x4B2D1B08
 * Callers:
 *     _LdrpCfgProcessLoadConfig@12 @ 0x4B2CFEA0 (_LdrpCfgProcessLoadConfig@12.c)
 *     _LdrpLocateMrdata@0 @ 0x4B334ED2 (_LdrpLocateMrdata@0.c)
 * Callees:
 *     @LdrpTouchPageForWrite@4 @ 0x4B2F2950 (@LdrpTouchPageForWrite@4.c)
 */

unsigned int __fastcall LdrpMakePermanentImageCommit(int a1, unsigned int a2)
{
  unsigned int result; // eax
  unsigned int v3; // ecx
  int v4; // esi
  unsigned int v5; // edi
  int v6; // [esp+10h] [ebp-4h]

  v6 = a1 & ~(LdrpPageSize - 1);
  result = a2 / LdrpPageSize;
  v3 = a2 / LdrpPageSize + ((a2 & (LdrpPageSize - 1)) - 1 + LdrpPageSize + (a1 & (LdrpPageSize - 1))) / LdrpPageSize;
  if ( v3 )
  {
    v4 = v6;
    v5 = v3;
    do
    {
      result = LdrpTouchPageForWrite(v4);
      v4 += LdrpPageSize;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
