/*
 * XREFs of ?SetReferenceArrayProperty@CProjectedShadowSceneMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C00038D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@AEAI@Z @ 0x1C0004780 (-ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChan.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D6DD4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CProjectedShadowSceneMarshaler::SetReferenceArrayProperty(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  int v10; // edi
  unsigned __int64 v11; // rcx
  unsigned int v12; // esi
  struct DirectComposition::CResourceMarshaler **v13; // r8
  int v14; // r13d
  __int64 v15; // rsi
  __int64 v16; // r12
  unsigned int *v17; // rsi
  __int64 v18; // rax
  struct DirectComposition::CResourceMarshaler *v20; // rcx
  struct DirectComposition::CResourceMarshaler *v21; // rcx

  v6 = 0;
  v10 = 0;
  *a6 = 0;
  if ( a3 != 8 && a3 != 1 )
  {
    v11 = a5;
LABEL_38:
    v10 = -1073741811;
    goto LABEL_4;
  }
  v11 = a5;
  if ( a5 && !a4 )
    goto LABEL_38;
LABEL_4:
  v12 = 0;
  if ( a3 == 1 )
  {
    if ( v10 < 0 )
      return (unsigned int)v10;
    do
    {
      if ( v12 >= v11 )
        break;
      v20 = a4[v12];
      if ( !v20
        || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v20 + 96LL))(
              v20,
              130LL) )
      {
        v10 = -1073741811;
      }
      v11 = a5;
      ++v12;
    }
    while ( v10 >= 0 );
  }
  else
  {
    if ( v10 < 0 )
      return (unsigned int)v10;
    do
    {
      if ( v12 >= v11 )
        break;
      v21 = a4[v12];
      if ( !v21
        || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v21 + 96LL))(
              v21,
              131LL) )
      {
        v10 = -1073741811;
      }
      v11 = a5;
      ++v12;
    }
    while ( v10 >= 0 );
  }
  if ( v10 >= 0 )
  {
    if ( a3 == 1 )
      v13 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)this + 9);
    else
      v13 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)this + 11);
    v14 = 128;
    if ( a3 != 1 )
      v14 = 512;
    v15 = 80LL;
    if ( a3 != 1 )
      v15 = 96LL;
    v16 = 84LL;
    if ( a3 != 1 )
      v16 = 100LL;
    v17 = (unsigned int *)((char *)this + v15);
    if ( v13 )
    {
      DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
        (DirectComposition::CPrimitiveGroupMarshaler *)0x60,
        a2,
        v13,
        v17);
      *((_DWORD *)this + 4) |= v14;
    }
    v18 = 72LL;
    if ( a3 != 1 )
      v18 = 88LL;
    *(_QWORD *)((char *)this + v18) = a4;
    *v17 = a5;
    *(_DWORD *)((char *)this + v16) = 0;
    *a6 = 1;
    if ( *v17 )
    {
      do
        DirectComposition::CResourceMarshaler::AddRef(a4[v6++]);
      while ( v6 < *v17 );
    }
  }
  return (unsigned int)v10;
}
