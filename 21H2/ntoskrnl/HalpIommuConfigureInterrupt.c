/*
 * XREFs of HalpIommuConfigureInterrupt @ 0x1404CBEC0
 * Callers:
 *     HalpIommuInitializeAll @ 0x14099C3D4 (HalpIommuInitializeAll.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x1402694D0 (KeFindFirstSetRightGroupAffinity.c)
 *     HalpInterruptGenerateMessage @ 0x140377F98 (HalpInterruptGenerateMessage.c)
 *     HalpInterruptRemap @ 0x140378130 (HalpInterruptRemap.c)
 *     HalpInterruptIsMsiSupported @ 0x1403C9D48 (HalpInterruptIsMsiSupported.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpIommuSetupMessageInterruptRouting @ 0x1409A854C (HalpIommuSetupMessageInterruptRouting.c)
 */

__int64 __fastcall HalpIommuConfigureInterrupt(__int64 a1, int a2, __int128 *a3)
{
  __int128 v6; // xmm0
  unsigned int Message; // ebx
  int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // ecx
  __int64 result; // rax
  int v12[4]; // [rsp+30h] [rbp-69h] BYREF
  __int128 *v13; // [rsp+40h] [rbp-59h]
  __int128 v14; // [rsp+48h] [rbp-51h] BYREF
  _QWORD v15[12]; // [rsp+60h] [rbp-39h] BYREF

  v12[1] = 0;
  v12[3] = 0;
  v14 = 0LL;
  memset(v15, 0, 0x58uLL);
  v6 = *a3;
  HIDWORD(v15[0]) = 206;
  LOBYTE(v15[1]) = 12;
  v12[0] = 6;
  LODWORD(v15[5]) = a2 & 0x3FFFFFFF | v15[5] & 0xC0000000 | 0x40000000;
  *(_OWORD *)&v15[3] = v6;
  v12[2] = KeFindFirstSetRightGroupAffinity((__int64)a3);
  v13 = &v14;
  Message = -1073741637;
  LODWORD(v14) = a2 & 0x3FFFFFFF;
  if ( (*(_DWORD *)(a1 + 456) & 2) == 0 )
    return Message;
  if ( !HalpInterruptIsMsiSupported(1) )
    return Message;
  v8 = *(_DWORD *)(a1 + 360);
  if ( (v8 & 3) == 1 )
    return Message;
  if ( (v8 & 1) != 0 )
    goto LABEL_10;
  if ( a2 == 1073741822 )
  {
    Message = HalpInterruptGenerateMessage(v12, (__int64)v15, (_QWORD *)(a1 + 480), (_QWORD *)(a1 + 488));
    if ( (Message & 0x80000000) == 0 )
      goto LABEL_9;
    return Message;
  }
  v9 = *(_DWORD *)(a1 + 472);
  v10 = *(_DWORD *)(a1 + 468);
  HIDWORD(v15[1]) = 0;
  LODWORD(v15[0]) = 3;
  LODWORD(v15[2]) = 1;
  Message = HalpInterruptRemap(v10, v9, 0LL, 0, (unsigned int *)v15, 1u);
  if ( (Message & 0x80000000) != 0 )
    return Message;
  *(_DWORD *)(a1 + 484) = HIDWORD(v15[5]);
  *(_DWORD *)(a1 + 480) = v15[6];
  *(_QWORD *)(a1 + 488) = WORD2(v15[6]);
LABEL_9:
  *(_DWORD *)(a1 + 360) |= 1u;
LABEL_10:
  result = HalpIommuSetupMessageInterruptRouting(a1);
  if ( (int)result >= 0 )
    *(_DWORD *)(a1 + 360) |= 2u;
  return result;
}
