/*
 * XREFs of CmpQueryKeyDataFromCache @ 0x14065F57C
 * Callers:
 *     CmpQueryKeyData @ 0x14065F49C (CmpQueryKeyData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmGetVisibleValueCount @ 0x14065F744 (CmGetVisibleValueCount.c)
 *     CmGetKeyLastWriteTime @ 0x14065F780 (CmGetKeyLastWriteTime.c)
 *     CmGetVisibleMaxValueNameLenAndDataLen @ 0x14065F7F8 (CmGetVisibleMaxValueNameLenAndDataLen.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x14065F88C (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmGetVisibleSubkeyCount @ 0x14066000C (CmGetVisibleSubkeyCount.c)
 */

__int64 __fastcall CmpQueryKeyDataFromCache(__int64 a1, int a2, __int64 a3, unsigned int a4, _DWORD *a5, __int64 a6)
{
  __int64 v9; // rax
  unsigned __int16 v10; // r14
  int VisibleMaxNameLenAndClassLen; // ebx
  int v12; // edx
  int v13; // ecx
  __int64 v14; // rax
  int v16; // [rsp+30h] [rbp-38h] BYREF
  int v17; // [rsp+34h] [rbp-34h] BYREF
  int v18; // [rsp+38h] [rbp-30h]
  _DWORD v19[4]; // [rsp+40h] [rbp-28h] BYREF
  int v20; // [rsp+70h] [rbp+8h] BYREF

  v19[0] = -1;
  v19[1] = 0;
  v20 = 0;
  v16 = 0;
  v17 = 0;
  v9 = *(_QWORD *)(a1 + 80);
  if ( !v9 )
    return 3221225626LL;
  v10 = *(_WORD *)(v9 + 24);
  if ( (*(_DWORD *)v9 & 1) != 0 )
    v10 *= 2;
  if ( a2 == 4 )
  {
    VisibleMaxNameLenAndClassLen = CmGetVisibleMaxNameLenAndClassLen(a1, 0, a6, (unsigned int)&v20, 0LL);
    if ( VisibleMaxNameLenAndClassLen >= 0 )
    {
      VisibleMaxNameLenAndClassLen = CmGetVisibleMaxValueNameLenAndDataLen(a1, 0, a6, (unsigned int)&v16, (__int64)&v17);
      if ( VisibleMaxNameLenAndClassLen >= 0 )
      {
        *a5 = 40;
        if ( a4 < 0x28 )
        {
          VisibleMaxNameLenAndClassLen = -1073741789;
          v18 = -1073741789;
        }
        else
        {
          *(_QWORD *)a3 = CmGetKeyLastWriteTime(a1, 0LL, a6);
          *(_DWORD *)(a3 + 8) = 0;
          *(_DWORD *)(a3 + 32) = v10;
          *(_DWORD *)(a3 + 20) = CmGetVisibleValueCount(a1, 0LL, a6);
          *(_DWORD *)(a3 + 16) = v20;
          *(_DWORD *)(a3 + 24) = v16;
          *(_DWORD *)(a3 + 28) = v17;
          v13 = *(_DWORD *)(a1 + 8);
          if ( (v13 & 0x40) != 0 || *(_QWORD *)(a1 + 208) != a1 + 208 )
          {
            v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 32) + 8LL))(
                    *(_QWORD *)(a1 + 32),
                    *(unsigned int *)(a1 + 40),
                    v19);
            if ( v14 )
            {
              *(_DWORD *)(a3 + 12) = CmGetVisibleSubkeyCount(a1, v14, a6);
              (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), v19);
            }
            else
            {
              VisibleMaxNameLenAndClassLen = -1073741670;
              v18 = -1073741670;
            }
          }
          else if ( (v13 & 1) != 0 )
          {
            *(_DWORD *)(a3 + 12) = v12;
          }
          else if ( (v13 & 2) != 0 )
          {
            *(_DWORD *)(a3 + 12) = 1;
          }
          else if ( (v13 & 4) != 0 )
          {
            *(_DWORD *)(a3 + 12) = **(_DWORD **)(a1 + 112);
          }
          else
          {
            *(_DWORD *)(a3 + 12) = *(_DWORD *)(a1 + 112);
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)VisibleMaxNameLenAndClassLen;
}
