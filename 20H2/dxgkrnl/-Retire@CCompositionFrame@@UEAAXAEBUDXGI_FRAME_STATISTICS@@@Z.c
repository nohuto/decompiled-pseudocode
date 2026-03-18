/*
 * XREFs of ?Retire@CCompositionFrame@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C0014C10
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C001230C (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionFrame::Retire(CCompositionFrame *this, const struct DXGI_FRAME_STATISTICS *a2)
{
  CCompositionFrame *v2; // rdi
  CCompositionFrame *v3; // rsi
  __int64 v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rbp
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx

  v2 = (CCompositionFrame *)((char *)this + 144);
  *((_DWORD *)this + 22) = 2;
  v3 = (CCompositionFrame *)*((_QWORD *)this + 18);
  if ( v3 != (CCompositionFrame *)((char *)this + 144) )
  {
    do
    {
      (*(void (__fastcall **)(__int64, const struct DXGI_FRAME_STATISTICS *))(*((_QWORD *)v3 - 1) + 48LL))(
        (__int64)v3 - 8,
        a2);
      v3 = *(CCompositionFrame **)v3;
    }
    while ( v3 != v2 );
  }
  v6 = *((_QWORD *)this + 13);
  if ( v6 )
  {
    v7 = *(_QWORD **)(v6 + 24);
    v8 = (_QWORD *)(v6 + 16);
    v9 = *((_QWORD *)this + 22);
    if ( *v7 == v6 + 16 )
    {
      v10 = (_QWORD *)v7[1];
      if ( (_QWORD *)*v10 == v7 )
      {
        *(_QWORD *)(v6 + 24) = v10;
        *v10 = v8;
        if ( v7 == v8 )
        {
LABEL_6:
          *(_QWORD *)(v6 + 2088) = v8;
          *(_DWORD *)(v6 + 32) = 0;
          *(_DWORD *)(v6 + 2084) = 0;
          *(_QWORD *)(v6 + 2096) = v6 + 36;
          *(_BYTE *)(v6 + 2108) = 0;
          *(_DWORD *)(v6 + 2104) = 2048;
          if ( *(_DWORD *)(v9 + 176) > 3u )
          {
            CLegacyTokenBuffer::`scalar deleting destructor'((CLegacyTokenBuffer *)v6);
            goto LABEL_9;
          }
          ExAcquirePushLockExclusiveEx(v9 + 88, 0LL);
          *(_QWORD *)(v9 + 96) = KeGetCurrentThread();
          v11 = (_QWORD *)(v9 + 160);
          v12 = *(_QWORD *)(v9 + 160);
          if ( *(_QWORD *)(v12 + 8) == v9 + 160 )
          {
            *(_QWORD *)v6 = v12;
            *(_QWORD *)(v6 + 8) = v11;
            *(_QWORD *)(v12 + 8) = v6;
            *v11 = v6;
            ++*(_DWORD *)(v9 + 176);
            *(_QWORD *)(v9 + 96) = 0LL;
            ExReleasePushLockExclusiveEx(v9 + 88, 0LL);
LABEL_9:
            *((_QWORD *)this + 13) = 0LL;
            goto LABEL_10;
          }
        }
        else
        {
          while ( 1 )
          {
            if ( v7 )
              ExFreePoolWithTag(v7, 0);
            v7 = *(_QWORD **)(v6 + 24);
            if ( (_QWORD *)*v7 != v8 )
              break;
            v13 = (_QWORD *)v7[1];
            if ( (_QWORD *)*v13 != v7 )
              break;
            *(_QWORD *)(v6 + 24) = v13;
            *v13 = v8;
            if ( v7 == v8 )
              goto LABEL_6;
          }
        }
      }
    }
    __fastfail(3u);
  }
LABEL_10:
  *((_BYTE *)this + 112) = 0;
}
