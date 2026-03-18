/*
 * XREFs of ?SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0188E84
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0176AF4 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C0207F5C (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGGLOBAL::SetWarpAdapter(DXGGLOBAL *this, struct DXGADAPTER *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 91);
  if ( !v2 || v2 == *((_QWORD *)this + 89) )
  {
    *((_QWORD *)this + 91) = a2;
    if ( a2 )
      *((_QWORD *)this + 92) = *(_QWORD *)((char *)a2 + 316);
  }
  *((_QWORD *)this + 89) = a2;
}
