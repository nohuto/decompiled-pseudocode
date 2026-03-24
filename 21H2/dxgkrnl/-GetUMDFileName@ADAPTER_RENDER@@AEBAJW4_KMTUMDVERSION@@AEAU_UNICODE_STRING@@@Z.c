/*
 * XREFs of ?GetUMDFileName@ADAPTER_RENDER@@AEBAJW4_KMTUMDVERSION@@AEAU_UNICODE_STRING@@@Z @ 0x1C01292E4
 * Callers:
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C0129260 (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C0129368 (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetUMDFileName(ADAPTER_RENDER *this, __int64 a2, struct _UNICODE_STRING *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // cl
  struct _UNICODE_STRING v9; // xmm0
  __int64 v11; // rax
  __int64 v12; // rax

  v3 = (unsigned int)a2;
  if ( (unsigned int)a2 >= 4 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v11 + 24) = 3153LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !DXGPROCESS::GetCurrent((__int64)this, a2) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v12 + 24) = 3154LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v8 = *((_BYTE *)DXGPROCESS::GetCurrent(v7, v6) + 347);
  if ( (v8 & 1) != 0 )
  {
    v9 = *(struct _UNICODE_STRING *)((char *)this + 16 * v3 + 376);
    goto LABEL_8;
  }
  if ( (v8 & 6) == 0 )
  {
    v9 = *(struct _UNICODE_STRING *)((char *)this + 16 * v3 + 312);
LABEL_8:
    *a3 = v9;
    return 0LL;
  }
  if ( (_DWORD)v3 == 3 )
  {
    v9 = *(struct _UNICODE_STRING *)((char *)this + 472);
    goto LABEL_8;
  }
  return 3221225485LL;
}
