/*
 * XREFs of LdrpMakePermanentImageCommit @ 0x18000F280
 * Callers:
 *     LdrpCfgProcessLoadConfig @ 0x18000FDB4 (LdrpCfgProcessLoadConfig.c)
 *     LdrpLocateMrdata @ 0x1800D5AF4 (LdrpLocateMrdata.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall LdrpMakePermanentImageCommit(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 *v5; // r11
  __int64 v6; // rdx

  result = a2 / LdrpPageSize;
  v4 = a2 / LdrpPageSize
     + (LdrpPageSize
      + (unsigned __int64)(((unsigned int)a1 & ((_DWORD)LdrpPageSize - 1))
                         + ((unsigned int)a2 & ((_DWORD)LdrpPageSize - 1)))
      - 1)
     / LdrpPageSize;
  v5 = (unsigned __int64 *)(a1 & -LdrpPageSize);
  v6 = (unsigned int)v4;
  if ( (_DWORD)v4 )
  {
    do
    {
      result = *v5;
      *v5 = *v5;
      v5 = (unsigned __int64 *)((char *)v5 + LdrpPageSize);
      --v6;
    }
    while ( v6 );
  }
  return result;
}
