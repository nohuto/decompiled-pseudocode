/*
 * XREFs of ?SetWindowId@CAudioSession@@UEAAJI@Z @ 0x180002D10
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?SetWindowId@CAudioStream@@QEAAXI@Z @ 0x1800D3948 (-SetWindowId@CAudioStream@@QEAAXI@Z.c)
 */

__int64 __fastcall CAudioSession::SetWindowId(CAudioSession *this, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v5; // esi
  __int64 v7; // rax

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  *((_DWORD *)this + 70) = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v5 = 0;
  if ( *((_QWORD *)this + 13) )
  {
    v7 = 0LL;
    do
    {
      CAudioStream::SetWindowId(*(CAudioStream **)(*((_QWORD *)this + 12) + 8 * v7), a2);
      v7 = ++v5;
    }
    while ( (unsigned __int64)v5 < *((_QWORD *)this + 13) );
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
