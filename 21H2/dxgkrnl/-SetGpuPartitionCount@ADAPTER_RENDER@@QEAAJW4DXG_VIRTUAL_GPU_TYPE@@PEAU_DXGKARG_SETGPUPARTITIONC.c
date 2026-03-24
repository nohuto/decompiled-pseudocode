/*
 * XREFs of ?SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETGPUPARTITIONCOUNT@@E@Z @ 0x1C0230A00
 * Callers:
 *     ?GetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETGPUPARTITIONINFO@@@Z @ 0x1C022FB28 (-GetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETGPUPARTITIONIN.c)
 *     DxgkDdiSetGpuPartitionCount @ 0x1C0231A5C (DxgkDdiSetGpuPartitionCount.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00046F8 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C022F838 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::SetGpuPartitionCount(ADAPTER_RENDER *a1, int a2, __int64 a3, char a4)
{
  __int64 result; // rax
  _BYTE *v8; // rcx
  _BYTE *v9; // rax
  _BYTE *v10; // rax

  if ( a4 || (result = ADAPTER_RENDER::EnsureVirtualGpuProcess(a1), (int)result >= 0) )
  {
    if ( a2 == 1 )
    {
      v8 = (_BYTE *)*((_QWORD *)a1 + 205);
      if ( !v8 )
      {
        v9 = operator new(0x58uLL, 0x4B677844u, 1, PagedPool);
        v8 = v9;
        if ( v9 )
        {
          v9[8] = 1;
          *(_QWORD *)v9 = &DXGVIRTUALGPUMANAGER::`vftable';
          *((_QWORD *)v9 + 4) = a1;
          *((_QWORD *)v9 + 5) = 0LL;
          *((_QWORD *)v9 + 6) = 0LL;
          *((_DWORD *)v9 + 16) = -1;
          *((_DWORD *)v9 + 14) = 0;
          *((_DWORD *)v9 + 15) = 14;
          *((_QWORD *)v9 + 10) = v9 + 72;
          *((_QWORD *)v9 + 9) = v9 + 72;
          *(_QWORD *)v9 = &DXGVIRTUALGPUMANAGER_PARAV::`vftable';
        }
        else
        {
          v8 = 0LL;
        }
        *((_QWORD *)a1 + 205) = v8;
        goto LABEL_9;
      }
    }
    else
    {
      v8 = (_BYTE *)*((_QWORD *)a1 + 204);
      if ( !v8 )
      {
        v10 = operator new(0x58uLL, 0x4B677844u, 1, PagedPool);
        v8 = v10;
        if ( v10 )
        {
          v10[8] = 0;
          *(_QWORD *)v10 = &DXGVIRTUALGPUMANAGER::`vftable';
          *((_QWORD *)v10 + 4) = a1;
          *((_QWORD *)v10 + 5) = 0LL;
          *((_QWORD *)v10 + 6) = 0LL;
          *((_DWORD *)v10 + 16) = -1;
          *((_DWORD *)v10 + 14) = 0;
          *((_DWORD *)v10 + 15) = 14;
          *((_QWORD *)v10 + 10) = v10 + 72;
          *((_QWORD *)v10 + 9) = v10 + 72;
          *(_QWORD *)v10 = &DXGVIRTUALGPUMANAGER_GPUP::`vftable';
        }
        else
        {
          v8 = 0LL;
        }
        *((_QWORD *)a1 + 204) = v8;
LABEL_9:
        if ( !v8 )
          return 3221225495LL;
      }
    }
    return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v8 + 8LL))(v8, a3);
  }
  return result;
}
