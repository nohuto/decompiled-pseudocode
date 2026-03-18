/*
 * XREFs of ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C029D46C
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0297684 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 * Callees:
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C02965D8 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C029D5A4 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessPresent(
        OUTPUTDUPL_CONTEXT *this,
        struct DXGDEVICE **a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        struct _D3DKMT_PRESENT_RGNS *a6,
        const struct DXGK_PRESENT_PARAMS *a7,
        struct AUTOEXPANDALLOCATION *a8,
        struct DXGCONTEXT **a9)
{
  int v9; // r15d
  int v10; // ebx
  DXGDXGIKEYEDMUTEX *v14; // rcx
  struct DXGDEVICE *v15; // rdi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  _DWORD v22[2]; // [rsp+20h] [rbp-50h] BYREF
  struct DXGCONTEXT *v23; // [rsp+28h] [rbp-48h]
  int v24; // [rsp+30h] [rbp-40h]
  int v25; // [rsp+34h] [rbp-3Ch]
  int v26; // [rsp+38h] [rbp-38h]
  int v27; // [rsp+3Ch] [rbp-34h]
  unsigned int v28; // [rsp+40h] [rbp-30h]
  int v29; // [rsp+44h] [rbp-2Ch]
  struct _D3DKMT_PRESENT_RGNS *v30; // [rsp+48h] [rbp-28h]
  struct AUTOEXPANDALLOCATION *v31; // [rsp+50h] [rbp-20h]
  const struct DXGK_PRESENT_PARAMS *v32; // [rsp+58h] [rbp-18h]
  struct DXGCONTEXT **v33; // [rsp+60h] [rbp-10h]

  v9 = a4;
  v10 = a3;
  if ( *((_DWORD *)this + 80) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = 1950LL;
    return 0LL;
  }
  v14 = (DXGDXGIKEYEDMUTEX *)*((_QWORD *)this + *((unsigned int *)this + 11) + 6);
  v15 = (struct DXGDEVICE *)*((_QWORD *)v14 + 1);
  if ( v15 )
  {
    if ( v15 != a2[2] )
    {
      v21 = WdLogNewEntry5_WdAssertion(v14, a2);
      *(_QWORD *)(v21 + 24) = v15;
      *(_QWORD *)(v21 + 32) = a2[2];
      WdLogEvent5_WdAssertion(v21);
      return 3221225473LL;
    }
  }
  else
  {
    v16 = DXGDXGIKEYEDMUTEX::OpenForDevice(v14, a2[2]);
    v19 = v16;
    if ( v16 < 0 )
    {
      v20 = WdLogNewEntry5_WdError(v18, v17);
      *(_QWORD *)(v20 + 24) = v19;
      WdLogEvent5_WdError(v20);
      return (unsigned int)v19;
    }
  }
  v22[1] = 0;
  v25 = 0;
  v29 = 0;
  v22[0] = 0;
  v24 = 0;
  v28 = a5;
  v30 = a6;
  v31 = a8;
  v32 = a7;
  v33 = a9;
  v23 = (struct DXGCONTEXT *)a2;
  v26 = v10;
  v27 = v9;
  return OUTPUTDUPL_CONTEXT::ProcessUpdateHighLevel(this, (struct _OUTPUTDUPL_UPDATE_INFO *)v22);
}
