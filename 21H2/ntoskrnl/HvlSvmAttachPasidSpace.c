/*
 * XREFs of HvlSvmAttachPasidSpace @ 0x1404F69F0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x140390450 (HvcallFastExtended.c)
 *     HvlpHandleInsufficientMemory @ 0x1404F1FE8 (HvlpHandleInsufficientMemory.c)
 *     HvlpAttachRootSvmDevice @ 0x1404F73D8 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1404F7490 (HvlpDetachRootSvmDevice.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1404FAC58 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1404FAC74 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmAttachPasidSpace(unsigned int a1, int a2, int a3, unsigned int a4)
{
  char v4; // si
  __int64 v5; // rdi
  int v8; // ebx
  __int64 v9; // rdx
  __int16 v10; // cx
  __int64 v11; // r8
  __int64 v13; // [rsp+40h] [rbp-18h] BYREF
  int v14; // [rsp+48h] [rbp-10h]
  int v15; // [rsp+4Ch] [rbp-Ch]

  v4 = 0;
  v5 = a1;
  if ( (HvlpFlags & 2) != 0 )
  {
    v8 = HvlpAttachRootSvmDevice(a1, a4);
    if ( v8 < 0 )
      return (unsigned int)v8;
    v4 = 1;
  }
  v13 = v5;
  v14 = a2;
  v15 = a3;
  while ( 1 )
  {
    v9 = HvcallFastExtended(65698LL, (__int64)&v13, 0x10u, 0, 0);
    if ( (HvlpFlags & 2) == 0 || !(unsigned __int8)HvlpHvStatusIsInsufficientMemory((unsigned __int16)v9, v9) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v10, v9, v11) < 0 )
    {
      v8 = -1073741670;
      goto LABEL_10;
    }
  }
  v8 = HvlpHvToNtStatus((unsigned __int16)v9);
  if ( v8 >= 0 )
    return (unsigned int)v8;
LABEL_10:
  if ( v4 )
    HvlpDetachRootSvmDevice((unsigned int)v5);
  return (unsigned int)v8;
}
