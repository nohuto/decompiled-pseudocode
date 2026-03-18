/*
 * XREFs of ?DxgkThreadCallout@@YAJPEAPEAXE@Z @ 0x1C018A860
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C018B028 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 */

__int64 __fastcall DxgkThreadCallout(struct DXGTHREAD **a1, char a2)
{
  struct DXGTHREAD *DxgThread; // rax
  struct DXGTHREAD *v5; // rcx
  int v6; // eax
  __int64 v7; // rbx
  struct DXGTHREAD *v8; // [rsp+70h] [rbp+18h] BYREF

  v8 = 0LL;
  if ( a2 != 1 )
  {
    v5 = *a1;
    if ( v5 )
    {
      v6 = _InterlockedDecrement((volatile signed __int32 *)v5 + 2);
      if ( v6 )
      {
        if ( v6 < 0 )
        {
          v7 = v6;
          WdLogSingleEntry1(2LL, v6);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Client is trying to release a destroyed object (ref count = %I64d)!",
            v7,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        (**(void (__fastcall ***)(struct DXGTHREAD *, __int64))v5)(v5, 1LL);
      }
      --dword_1C01303EC;
      *a1 = 0LL;
    }
    return 0LL;
  }
  if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v8) >= 0 && (DxgThread = v8) != 0LL
    || (DxgThread = DxgkThreadObjectCreateDxgThread(), (v8 = DxgThread) != 0LL) )
  {
    ++dword_1C01303F4;
    ++dword_1C01303EC;
    _InterlockedAdd((volatile signed __int32 *)DxgThread + 2, 1u);
    *a1 = v8;
    return 0LL;
  }
  WdLogSingleEntry1(6LL, 425LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to create DXGTHREAD for current thread.",
    425LL,
    0LL,
    0LL,
    0LL,
    0LL);
  *a1 = 0LL;
  return 3221225495LL;
}
