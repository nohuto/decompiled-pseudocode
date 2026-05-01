/*
 * XREFs of sub_18003CC28 @ 0x18003CC28
 * Callers:
 *     pfnwk @ 0x18003CA00 (pfnwk.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_18003CA90 @ 0x18003CA90 (sub_18003CA90.c)
 *     sub_18003F314 @ 0x18003F314 (sub_18003F314.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18003CC28(RTL_SRWLOCK *a1, __int64 a2, __int64 a3, __int64 a4)
{
  HSTRING v5; // rbx
  int v6; // eax
  unsigned int v7; // esi
  const WCHAR *StringRawBuffer; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  int v12; // eax
  PCWSTR v13; // rbp
  RTL_SRWLOCK *v14; // r14
  PVOID Ptr; // rcx
  int v16; // ebp
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  HSTRING string; // [rsp+68h] [rbp+10h] BYREF
  HSTRING v20; // [rsp+70h] [rbp+18h] BYREF
  RTL_SRWLOCK *v21; // [rsp+78h] [rbp+20h]

  v5 = 0LL;
  v20 = 0LL;
  string = 0LL;
  v6 = sub_18003CA90((__int64)a1, a2, L"Microsoft\\GameDVR", a4, &string);
  v7 = v6;
  if ( v6 >= 0 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    CreateDirectoryW(StringRawBuffer, 0LL);
    v12 = sub_18003CA90(v10, v9, L"Microsoft\\GameDVR\\KnownGameList.bin", v11, &v20);
    v7 = v12;
    if ( v12 >= 0 )
    {
      v21 = a1 + 2;
      AcquireSRWLockExclusive(a1 + 2);
      v5 = v20;
      v13 = WindowsGetStringRawBuffer(v20, 0LL);
      v14 = a1 + 1;
      Ptr = a1[1].Ptr;
      if ( Ptr )
      {
        v14->Ptr = 0LL;
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
      }
      v16 = sub_18003F314(&a1[1], v13);
      if ( (unsigned int)(v16 + 2147024894) > 1 && v16 < 0 )
        sub_180012300(retaddr, 178, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp", v16);
      ReleaseSRWLockExclusive(a1 + 2);
      if ( v16 >= 0 )
      {
        v21 = a1 + 2;
        AcquireSRWLockShared(a1 + 2);
        (*(void (__fastcall **)(PVOID, RTL_SRWLOCK *))(*(_QWORD *)v14->Ptr + 80LL))(v14->Ptr, a1 + 3);
        ReleaseSRWLockShared(a1 + 2);
      }
      v7 = 0;
    }
    else
    {
      sub_180003268(retaddr, 169, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp", v12);
      v5 = v20;
    }
  }
  else
  {
    sub_180003268(retaddr, 162, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp", v6);
  }
  if ( string )
    WindowsDeleteString(string);
  if ( v5 )
    WindowsDeleteString(v5);
  return v7;
}
