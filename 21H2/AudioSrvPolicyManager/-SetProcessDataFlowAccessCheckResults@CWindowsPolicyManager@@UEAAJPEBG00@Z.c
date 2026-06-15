/*
 * XREFs of ?SetProcessDataFlowAccessCheckResults@CWindowsPolicyManager@@UEAAJPEBG00@Z @ 0x180006C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowsPolicyManager::SetProcessDataFlowAccessCheckResults(
        CWindowsPolicyManager *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  CApplicationManager *v4; // rbx
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  _QWORD *v8; // rbx
  __int64 v9; // rsi
  unsigned int v10; // eax
  _DWORD *v11; // rcx

  v4 = g_ApplicationManager;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v8 = (_QWORD *)*((_QWORD *)v4 + 16);
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
