/*
 * XREFs of sub_180006C20 @ 0x180006C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180006C20(__int64 a1, __int64 a2, const WCHAR *a3, const WCHAR *a4)
{
  __int64 v4; // rbx
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  _QWORD *v8; // rbx
  __int64 v9; // rsi
  unsigned int v10; // eax
  _DWORD *v11; // rcx

  v4 = qword_18004FE78;
  v7 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v8 = *(_QWORD **)(v4 + 128);
  while ( v8 )
  {
    v9 = v8[2];
    v8 = (_QWORD *)*v8;
    if ( (!a3 || CompareStringOrdinal(a3, -1, *(LPCWCH *)(v9 + 232), -1, 1) == 2)
      && (!a4 || CompareStringOrdinal(a4, -1, *(LPCWCH *)(v9 + 216), -1, 1) == 2) )
    {
      v10 = 0;
      v11 = (_DWORD *)(v9 + 248);
      do
      {
        ++v10;
        *v11++ = -2147023728;
      }
      while ( v10 < 2 );
    }
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  return 0LL;
}
