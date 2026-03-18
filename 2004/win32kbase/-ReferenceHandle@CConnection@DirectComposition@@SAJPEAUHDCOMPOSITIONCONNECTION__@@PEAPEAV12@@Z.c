/*
 * XREFs of ?ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z @ 0x1C0024AA8
 * Callers:
 *     NtDCompositionDiscardFrame @ 0x1C0024760 (NtDCompositionDiscardFrame.c)
 *     NtDCompositionRetireFrame @ 0x1C00248B0 (NtDCompositionRetireFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CConnection::ReferenceHandle(
        struct HDCOMPOSITIONCONNECTION__ *a1,
        struct DirectComposition::CConnection **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v7; // edi
  __int64 v8; // rsi
  struct _ERESOURCE *v9; // rbx
  volatile signed __int32 *v10; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3, a4);
  v7 = 0;
  if ( CurrentProcessWin32Process && (v8 = *(_QWORD *)(CurrentProcessWin32Process + 256)) != 0 )
  {
    v9 = *(struct _ERESOURCE **)(v8 + 32);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(v9, 1u);
    v10 = *(volatile signed __int32 **)(v8 + 24);
    if ( v10 && a1 == *(struct HDCOMPOSITIONCONNECTION__ **)(v8 + 16) )
    {
      _InterlockedIncrement(v10);
      *a2 = *(struct DirectComposition::CConnection **)(v8 + 24);
    }
    else
    {
      v7 = -1073741790;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v8 + 32));
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v7;
}
