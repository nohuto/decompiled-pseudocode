/*
 * XREFs of sub_18013AA94 @ 0x18013AA94
 * Callers:
 *     sub_1800661E0 @ 0x1800661E0 (sub_1800661E0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18013BE08 @ 0x18013BE08 (sub_18013BE08.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18013AA94(int a1, const WCHAR *a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  HRESULT v10; // ebx
  void *ppvObject; // [rsp+40h] [rbp-10h] BYREF
  IStream *ppstm; // [rsp+48h] [rbp-8h] BYREF

  ppvObject = 0LL;
  ppstm = 0LL;
  v10 = SHCreateStreamOnFileW(a2, 0, &ppstm);
  if ( v10 >= 0 )
  {
    v10 = CreateXmlReader(&stru_180178D78, &ppvObject, 0LL);
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)ppvObject + 40LL))(ppvObject, 4LL);
      if ( v10 >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)ppvObject + 40LL))(ppvObject, 6LL, 60LL);
        if ( v10 >= 0 )
        {
          v10 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)ppvObject + 40LL))(ppvObject, 1LL, 2LL);
          if ( v10 >= 0 )
          {
            v10 = (*(__int64 (__fastcall **)(void *, IStream *))(*(_QWORD *)ppvObject + 24LL))(ppvObject, ppstm);
            if ( v10 >= 0 )
              v10 = sub_18013BE08(a1, (_DWORD)ppvObject, a3, a4, a5, a6, a7);
          }
        }
      }
    }
  }
  if ( ppstm )
    (*(void (__fastcall **)(IStream *))(*(_QWORD *)ppstm + 16LL))(ppstm);
  if ( ppvObject )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppvObject + 16LL))(ppvObject);
  return (unsigned int)v10;
}
