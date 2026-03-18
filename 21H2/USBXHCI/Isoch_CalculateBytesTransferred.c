/*
 * XREFs of Isoch_CalculateBytesTransferred @ 0x1C0041BD0
 * Callers:
 *     Isoch_FindTrbMatch @ 0x1C00424C0 (Isoch_FindTrbMatch.c)
 * Callees:
 *     Isoch_ProcessSegment @ 0x1C00428A4 (Isoch_ProcessSegment.c)
 */

__int64 __fastcall Isoch_CalculateBytesTransferred(int a1, __int64 a2, int a3)
{
  _QWORD *v5; // rdi
  _QWORD *v7; // r9
  int v8; // eax
  _QWORD *v9; // rsi
  int v11; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0;
  v12 = 0;
  v5 = *(_QWORD **)(a2 + 112);
  v7 = *(_QWORD **)(a2 + 96);
  v8 = *(_DWORD *)(a2 + 120);
  if ( v5 != v7 )
  {
    v9 = (_QWORD *)(a2 + 24);
    if ( v5 != (_QWORD *)(a2 + 24) )
    {
      while ( !(unsigned __int8)Isoch_ProcessSegment(a1, a2, a3, (_DWORD)v5, v8, (__int64)&v11, (__int64)&v12) )
      {
        v5 = (_QWORD *)*v5;
        v8 = 0;
        if ( v5 == v9 )
        {
          v7 = *(_QWORD **)(a2 + 96);
          goto LABEL_6;
        }
      }
      goto LABEL_7;
    }
  }
LABEL_6:
  v5 = v7;
  if ( (unsigned __int8)Isoch_ProcessSegment(a1, a2, a3, (_DWORD)v7, v8, (__int64)&v11, (__int64)&v12) )
  {
LABEL_7:
    *(_DWORD *)(a2 + 120) = v11;
    *(_QWORD *)(a2 + 112) = v5;
  }
  return v12;
}
