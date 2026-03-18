/*
 * XREFs of xxxGetWindowText @ 0x1C014C04C
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C014B43C (xxxDrawCaptionTemp.c)
 * Callees:
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     xxxDefWindowProc @ 0x1C00AF770 (xxxDefWindowProc.c)
 */

__int64 __fastcall xxxGetWindowText(__int64 *a1, _WORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // r8
  unsigned int v6; // edx
  __int64 result; // rax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9[2]; // [rsp+28h] [rbp-10h]

  *(_QWORD *)v9 = a2;
  *a2 = 0;
  v2 = a1[2];
  v8 = 0x20000000000LL;
  if ( *(_QWORD *)(v2 + 416) == *(_QWORD *)(gptiCurrent + 416LL) )
    v3 = xxxSendMessage((unsigned __int64)a1, 0xDu, 0x100uLL, (struct _LARGE_STRING *)&v8);
  else
    v3 = xxxDefWindowProc(a1, 0xDu, 0x100uLL, (unsigned __int64)&v8);
  v4 = v8;
  v5 = v3;
  if ( (unsigned int)v8 > (unsigned __int64)(HIDWORD(v8) & 0x7FFFFFFF) - 2 )
    v4 = (HIDWORD(v8) & 0x7FFFFFFF) - 2;
  v6 = v4 >> 1;
  if ( (unsigned int)v3 >= v6 )
    v5 = v6;
  result = (unsigned int)v5;
  *(_WORD *)(*(_QWORD *)v9 + 2 * v5) = 0;
  return result;
}
