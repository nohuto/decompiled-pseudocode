/*
 * XREFs of ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1C0189364
 * Callers:
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C01887E0 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C03627DC (-DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z @ 0x1C004A978 (--_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z.c)
 *     ??0DXGSHAREDRESOURCE@@IEAA@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@@Z @ 0x1C0189420 (--0DXGSHAREDRESOURCE@@IEAA@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@@Z.c)
 */

struct DXGSHAREDRESOURCE *__fastcall DXGSHAREDRESOURCE::CreateSharedResource(
        struct ADAPTER_RENDER *a1,
        struct DXGADAPTER *a2,
        char a3,
        __int64 a4)
{
  struct DXGSHAREDRESOURCE *result; // rax
  struct DXGSHAREDRESOURCE *v8; // rdi
  __int64 v9; // r9
  DXGSHAREDRESOURCE *v10; // rax
  DXGSHAREDRESOURCE *v11; // rbx
  DXGSHAREDRESOURCE *v12; // rax

  result = (struct DXGSHAREDRESOURCE *)operator new[](0x18uLL, 0x4B677844u, 64LL, a4);
  v8 = result;
  if ( result )
  {
    *(_QWORD *)result = 0LL;
    *((_QWORD *)result + 1) = 0LL;
    KeInitializeSpinLock((PKSPIN_LOCK)result + 2);
    if ( a3 )
    {
      v12 = (DXGSHAREDRESOURCE *)operator new[](0xF0uLL, 0x4B677844u, 256LL, v9);
      v11 = v12;
      if ( v12 )
      {
        DXGSHAREDRESOURCE::DXGSHAREDRESOURCE(v12, a1, a2);
        *((_DWORD *)v11 + 52) = 0;
        *((_DWORD *)v11 + 53) = 0;
        *((_DWORD *)v11 + 54) = 0;
        *((_QWORD *)v11 + 28) = 0LL;
        *((_DWORD *)v11 + 3) |= 0x20u;
        *(_QWORD *)v11 = &DXGSHAREDRESOURCECA::`vftable';
        goto LABEL_6;
      }
      v11 = 0LL;
    }
    else
    {
      v10 = (DXGSHAREDRESOURCE *)operator new[](0xD0uLL, 0x4B677844u, 256LL, v9);
      if ( !v10 )
      {
        v11 = 0LL;
        goto LABEL_13;
      }
      v11 = DXGSHAREDRESOURCE::DXGSHAREDRESOURCE(v10, a1, a2);
    }
    if ( v11 )
    {
LABEL_6:
      *((_QWORD *)v11 + 22) = v8;
      *(_QWORD *)v8 = v11;
      return v11;
    }
LABEL_13:
    DXGSHAREDRESOURCE_NONPAGED::`scalar deleting destructor'(v8);
    return v11;
  }
  return result;
}
