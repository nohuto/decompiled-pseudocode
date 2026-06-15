/*
 * XREFs of ?GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z @ 0x180045E70
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18002A740 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AD8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::GetAuxiliaryInputDescriptor(
        CSharedStreamGroupProxy *this,
        struct AuxiliaryInputDescriptor *a2)
{
  int v2; // ebx
  unsigned int v4; // edi
  __int64 v5; // rbp
  const unsigned __int16 *v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r15
  char *v10; // rax
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  *(_DWORD *)a2 = 0;
  v4 = 0;
  v5 = *((_QWORD *)this + 8);
  if ( v5 && !*(_DWORD *)(v5 + 8) )
  {
    v7 = *(const unsigned __int16 **)(v5 + 16);
    if ( v7 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( v7[v8] );
      v9 = v8 + 1;
      *((_QWORD *)a2 + 1) = 0LL;
      if ( v8 + 1 >= v8 && is_mul_ok(v9, 2uLL) )
      {
        v10 = (char *)CoTaskMemAlloc(2 * v9);
        *((_QWORD *)a2 + 1) = v10;
        if ( v10 )
          StringCchCopyNExW(v10, v8 + 1, v7, v8);
        else
          v4 = -2147024882;
      }
      else
      {
        v4 = -2147024362;
      }
    }
    else
    {
      v11 = 0LL;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v11);
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 32LL))(
             *(_QWORD *)&g_DeviceEnumerator,
             0LL,
             *(unsigned int *)(v5 + 24),
             &v11) >= 0 )
        v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 40LL))(v11, (char *)a2 + 8);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v11);
    }
    LOBYTE(v2) = *((_QWORD *)a2 + 1) != 0LL;
    *(_DWORD *)a2 = v2;
  }
  return v4;
}
