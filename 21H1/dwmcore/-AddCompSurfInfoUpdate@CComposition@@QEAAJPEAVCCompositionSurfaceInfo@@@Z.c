/*
 * XREFs of ?AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x1800212E8
 * Callers:
 *     ?SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NU_LUID@@W4BufferCompositionMode@@@Z @ 0x180069F40 (-SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NU_LUID@@W4BufferCompositionMode@@@Z.c)
 *     ?RecordStats@CGlobalCompositionSurfaceInfo@@UEAAXAEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800B7D90 (-RecordStats@CGlobalCompositionSurfaceInfo@@UEAAXAEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800A9948 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::AddCompSurfInfoUpdate(CComposition *this, struct CCompositionSurfaceInfo *a2)
{
  struct CComposition *v2; // r10
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // rax
  struct CCompositionSurfaceInfo **v6; // rcx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  int v10; // eax
  struct CCompositionSurfaceInfo *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v2 = g_pComposition;
  v3 = 0;
  v4 = 0LL;
  v5 = *((unsigned int *)g_pComposition + 158);
  if ( !(_DWORD)v5 )
  {
LABEL_5:
    v8 = v5 + 1;
    if ( (int)v5 + 1 < (unsigned int)v5 )
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      if ( v8 <= *((_DWORD *)g_pComposition + 157) )
      {
        *(_QWORD *)(*((_QWORD *)g_pComposition + 76) + 8 * v5) = a2;
        *((_DWORD *)v2 + 158) = v8;
LABEL_8:
        (*(void (__fastcall **)(struct CCompositionSurfaceInfo *, struct CCompositionSurfaceInfo *, __int64))(*(_QWORD *)v11 + 8LL))(
          v11,
          a2,
          v4);
        return v3;
      }
      v10 = DynArrayImpl<0>::AddMultipleAndSet((char *)g_pComposition + 608, 8LL, 1LL, &v11);
      v3 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v10, 0xC0u, 0LL);
    }
    if ( (v3 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v3, 0x272u, 0LL);
      return v3;
    }
    goto LABEL_8;
  }
  v6 = (struct CCompositionSurfaceInfo **)*((_QWORD *)g_pComposition + 76);
  while ( a2 != *v6 )
  {
    v4 = (unsigned int)(v4 + 1);
    ++v6;
    if ( (unsigned int)v4 >= (unsigned int)v5 )
      goto LABEL_5;
  }
  return v3;
}
