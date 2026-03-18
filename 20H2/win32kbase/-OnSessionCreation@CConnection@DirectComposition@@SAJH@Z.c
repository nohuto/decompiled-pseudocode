/*
 * XREFs of ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C00B63C0
 * Callers:
 *     DCompositionSessionInitialize @ 0x1C00B6200 (DCompositionSessionInitialize.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C005EAB0 (Win32AllocPoolNonPaged.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C00B64B8 (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     ??0CConnection@DirectComposition@@AEAA@XZ @ 0x1C00B6704 (--0CConnection@DirectComposition@@AEAA@XZ.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

__int64 __fastcall DirectComposition::CConnection::OnSessionCreation(int a1)
{
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rdi
  NTSTATUS v4; // ebx
  DirectComposition::CConnection *v5; // rax
  DirectComposition::CConnection *v6; // rcx

  DirectComposition::CConnection::s_pSessionConnectionLock = 0LL;
  v2 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, sizeof(struct _ERESOURCE));
  else
    v3 = 0LL;
  if ( v3 )
  {
    v4 = ExInitializeResourceLite(v3);
    if ( v4 < 0 )
    {
      Win32FreePool((__int64)v3);
    }
    else
    {
      DirectComposition::CConnection::s_pSessionConnectionLock = v3;
      KeQueryPerformanceCounter(&DirectComposition::CConnection::s_qpcFrequency);
      if ( a1 || (unsigned int)PsGetCurrentProcessSessionId() )
      {
        v5 = (DirectComposition::CConnection *)Win32AllocPoolZInit(0x100uLL, 0x63634344u);
        if ( v5 )
          v5 = (DirectComposition::CConnection *)DirectComposition::CConnection::CConnection(v5);
        DirectComposition::CConnection::s_pSessionConnection = v5;
        if ( !v5 )
          v4 = -1073741801;
        if ( v4 >= 0 )
          return (unsigned int)DirectComposition::CConnection::Initialize(v6);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v4;
}
