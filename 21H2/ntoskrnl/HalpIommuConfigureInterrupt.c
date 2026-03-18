/*
 * XREFs of HalpIommuConfigureInterrupt @ 0x140517DCC
 * Callers:
 *     HalpIommuInitializeAll @ 0x140A543D8 (HalpIommuInitializeAll.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x1402FE230 (KeFindFirstSetRightGroupAffinity.c)
 *     HalpInterruptRemap @ 0x1403D57DC (HalpInterruptRemap.c)
 *     HalpInterruptGenerateMessage @ 0x1403D5B40 (HalpInterruptGenerateMessage.c)
 *     HalpInterruptIsMsiSupported @ 0x1403D8A98 (HalpInterruptIsMsiSupported.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalpIommuSetupMessageInterruptRouting @ 0x140A61BB0 (HalpIommuSetupMessageInterruptRouting.c)
 */

__int64 __fastcall HalpIommuConfigureInterrupt(__int64 a1, int a2, __int128 *a3)
{
  __int128 v6; // xmm0
  unsigned int Message; // ebx
  int v8; // ecx
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 result; // rax
  __int64 v12; // [rsp+30h] [rbp-69h] BYREF
  int FirstSetRightGroupAffinity; // [rsp+38h] [rbp-61h]
  int v14; // [rsp+3Ch] [rbp-5Dh]
  __int128 *v15; // [rsp+40h] [rbp-59h]
  __int128 v16; // [rsp+48h] [rbp-51h] BYREF
  _QWORD v17[12]; // [rsp+60h] [rbp-39h] BYREF

  v14 = 0;
  v12 = 6LL;
  v16 = 0LL;
  memset(v17, 0, 0x58uLL);
  v6 = *a3;
  HIDWORD(v17[0]) = 206;
  LOBYTE(v17[1]) = 12;
  LODWORD(v17[5]) = a2 & 0x3FFFFFFF | v17[5] & 0xC0000000 | 0x40000000;
  *(_OWORD *)&v17[3] = v6;
  FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)a3);
  v15 = &v16;
  Message = -1073741637;
  LODWORD(v16) = a2 & 0x3FFFFFFF;
  if ( (*(_DWORD *)(a1 + 472) & 2) == 0 )
    return Message;
  if ( !HalpInterruptIsMsiSupported(1) )
    return Message;
  v8 = *(_DWORD *)(a1 + 376);
  if ( (v8 & 3) == 1 )
    return Message;
  if ( (v8 & 1) != 0 )
    goto LABEL_10;
  if ( a2 == 1073741822 )
  {
    Message = HalpInterruptGenerateMessage((__int64)&v12, (__int64)v17, (_QWORD *)(a1 + 496), (_QWORD *)(a1 + 504));
    if ( (Message & 0x80000000) == 0 )
      goto LABEL_9;
    return Message;
  }
  v9 = *(unsigned int *)(a1 + 488);
  v10 = *(_DWORD *)(a1 + 484);
  HIDWORD(v17[1]) = 0;
  LODWORD(v17[0]) = 3;
  LODWORD(v17[2]) = 1;
  Message = HalpInterruptRemap(v10, v9, 0, 0, (unsigned int *)v17, 1u);
  if ( (Message & 0x80000000) != 0 )
    return Message;
  *(_DWORD *)(a1 + 500) = HIDWORD(v17[5]);
  *(_DWORD *)(a1 + 496) = v17[6];
  *(_QWORD *)(a1 + 504) = HIDWORD(v17[6]);
LABEL_9:
  *(_DWORD *)(a1 + 376) |= 1u;
LABEL_10:
  result = HalpIommuSetupMessageInterruptRouting(a1);
  if ( (int)result >= 0 )
    *(_DWORD *)(a1 + 376) |= 2u;
  return result;
}
