/*
 * XREFs of CApplicationFrameService::_FindFrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f___ @ 0x1800738CC
 * Callers:
 *     ?GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x180073850 (-GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 * Callees:
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801409F0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall CApplicationFrameService::_FindFrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f___(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r10
  int v7; // r11d
  __int64 v8; // rdi
  __int64 v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  unsigned __int64 i; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdx
  signed __int64 v15; // rax
  signed __int64 v16; // rtt

  *a3 = 0LL;
  v4 = 0LL;
  v5 = a2;
  v7 = -2147023728;
  do
  {
    if ( v4 >= a1[18] )
      break;
    v8 = a1[17];
    v9 = *(_QWORD *)(v8 + 8 * v4);
    if ( *(_QWORD *)(v9 + 80) == v5 )
    {
      v7 = 0;
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 64);
        while ( v10 >= 0 )
        {
          if ( (_DWORD)v10 != 0x7FFFFFFF )
          {
            v11 = v10;
            v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 64), v10 + 1, v10);
            if ( v11 != v10 )
              continue;
          }
          goto LABEL_11;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v10 + 16));
      }
LABEL_11:
      *a3 = *(_QWORD *)(v8 + 8 * v4);
    }
    else
    {
      v7 = -2147023728;
    }
    ++v4;
  }
  while ( v7 < 0 );
  for ( i = 0LL; v7 < 0 && i < a1[14]; ++i )
  {
    v13 = a1[13];
    v14 = *(_QWORD *)(v13 + 8 * i);
    if ( *(_QWORD *)(v14 + 80) == v5 )
    {
      v7 = 0;
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 64);
        while ( v15 >= 0 )
        {
          if ( (_DWORD)v15 != 0x7FFFFFFF )
          {
            v16 = v15;
            v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 64), v15 + 1, v15);
            if ( v16 != v15 )
              continue;
          }
          goto LABEL_24;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v15 + 16));
      }
LABEL_24:
      *a3 = *(_QWORD *)(v13 + 8 * i);
    }
    else
    {
      v7 = -2147023728;
    }
  }
  return (unsigned int)v7;
}
