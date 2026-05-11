/*
 * XREFs of PropertySetDbLevelSideband @ 0x1C0028D54
 * Callers:
 *     ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000EA54 (-SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F6E4 (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0013270 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C002316C (DeviceRequestPowerUp.c)
 */

__int64 __fastcall PropertySetDbLevelSideband(PIRP *Irp, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v6; // rcx
  __int64 v8; // rdi
  __int64 v10; // r14
  NTSTATUS v11; // esi
  PIRP v12; // rbx
  int v13; // ebp
  _DWORD *v14; // rdi
  int v15; // ebx
  int v17; // [rsp+70h] [rbp+8h] BYREF

  v17 = 0;
  v6 = a5;
  v8 = *(_QWORD *)(a2 + 128);
  v10 = (unsigned int)a4;
  v11 = -1073741811;
  v12 = Irp[2];
  v13 = *a5;
  if ( LODWORD(v12[2].UserBuffer) != 1 )
  {
    v11 = DeviceRequestPowerUp(Irp, a2, (__int64)a3, a4);
    if ( v11 < 0 )
      return 3221225635LL;
    KeWaitForSingleObject(&v12[2].Tail.CompletionKey + 1, Executive, 0, 0, 0LL);
    v6 = a5;
  }
  if ( (unsigned int)v10 < *(_DWORD *)(a2 + 92) )
  {
    v14 = (_DWORD *)(32 * v10 + v8);
    v15 = v14[7];
    if ( v13 <= v15 )
    {
      v15 = v13;
      if ( v13 < v14[6] )
        v15 = v14[6];
    }
    *v6 = v15;
    v11 = (*(__int64 (__fastcall **)(PIRP *, __int64, _DWORD *, _QWORD, int, int *))(a2 + 136))(
            Irp,
            a2,
            v6,
            (unsigned int)v10,
            1,
            &v17);
    if ( v11 >= 0 )
    {
      v14[3] = v15;
      *a3 = v17;
    }
  }
  return (unsigned int)v11;
}
