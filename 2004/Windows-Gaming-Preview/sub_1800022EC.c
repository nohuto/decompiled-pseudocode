/*
 * XREFs of sub_1800022EC @ 0x1800022EC
 * Callers:
 *     sub_1800034C8 @ 0x1800034C8 (sub_1800034C8.c)
 *     sub_1800081FC @ 0x1800081FC (sub_1800081FC.c)
 *     sub_18000870C @ 0x18000870C (sub_18000870C.c)
 *     sub_18001124C @ 0x18001124C (sub_18001124C.c)
 *     sub_18003F4AC @ 0x18003F4AC (sub_18003F4AC.c)
 * Callees:
 *     sub_18000307C @ 0x18000307C (sub_18000307C.c)
 */

__int64 sub_1800022EC()
{
  signed int LastError; // ecx
  __int64 result; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LastError = GetLastError();
  if ( !LastError )
  {
    sub_18000307C(0, 0, 0, 0, 0LL, retaddr, 2, -2147024228);
    LastError = 668;
  }
  result = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    return (unsigned int)LastError;
  return result;
}
