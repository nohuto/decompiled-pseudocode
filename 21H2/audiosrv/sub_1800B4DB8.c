/*
 * XREFs of sub_1800B4DB8 @ 0x1800B4DB8
 * Callers:
 *     sub_1800B4E2C @ 0x1800B4E2C (sub_1800B4E2C.c)
 *     sub_1800B5370 @ 0x1800B5370 (sub_1800B5370.c)
 *     sub_1800B5414 @ 0x1800B5414 (sub_1800B5414.c)
 * Callees:
 *     sub_18004BDBC @ 0x18004BDBC (sub_18004BDBC.c)
 */

DWORD __fastcall sub_1800B4DB8(int a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  DWORD result; // eax

  result = GetLastError();
  if ( !result )
  {
    sub_18004BDBC(a1, a2, a3, 0, 0LL, a6, 2, -2147024228);
    return 668;
  }
  return result;
}
