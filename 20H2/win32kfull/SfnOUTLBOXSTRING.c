/*
 * XREFs of SfnOUTLBOXSTRING @ 0x1C014EEB0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ClientGetListboxString @ 0x1C014EFC4 (ClientGetListboxString.c)
 */

__int64 __fastcall SfnOUTLBOXSTRING(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  _QWORD *v11; // rbx
  int v12; // edi
  __int64 result; // rax
  int v14; // ecx
  __int64 ThreadWin32Thread; // rax
  unsigned int ListboxString; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD v20[4]; // [rsp+50h] [rbp-28h] BYREF

  v20[2] = 0LL;
  v11 = a1;
  if ( a1 )
    a1 = (_QWORD *)*a1;
  v12 = 1;
  result = HMValidateHandleNoSecure((unsigned __int64)a1, 1);
  if ( result )
  {
    v14 = *(_DWORD *)(v11[5] + 28LL);
    if ( (v14 & 0x40) != 0 || (v14 & 0x30) == 0 )
      v12 = 0;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v20[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v20;
    v20[1] = v11;
    HMLockObject(v11);
    ListboxString = ClientGetListboxString(v11, a2, a3, a4, a5, a6, a7, v12, a8);
    ThreadUnlock1(v18, v17, v19);
    return ListboxString;
  }
  return result;
}
