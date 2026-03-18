/*
 * XREFs of ?SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01F82C0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C008F360 (Win32AllocPoolWithQuota.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x1C01D7D4C (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 *     ?FindProperty@CGenericMarshaler@DirectComposition@@IEAA?AVCPropertyIterator@2@I@Z @ 0x1C01F8200 (-FindProperty@CGenericMarshaler@DirectComposition@@IEAA-AVCPropertyIterator@2@I@Z.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetBufferProperty(
        DirectComposition::CGenericMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        size_t Size,
        bool *a6)
{
  size_t v6; // rsi
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  bool *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 *v20; // [rsp+50h] [rbp+8h] BYREF

  v6 = Size;
  DirectComposition::CGenericMarshaler::FindProperty((__int64)this, &v20, a3);
  v10 = v20;
  if ( v20 == (__int64 *)(*((_QWORD *)this + 8) + 8LL * *((_QWORD *)this + 9)) )
    goto LABEL_9;
  v11 = *v20;
  if ( *(_BYTE *)(*v20 + 4) != 5 )
    v11 = 0LL;
  if ( !v11 )
    return 3221225485LL;
  v13 = 0LL;
  if ( *(_QWORD *)(v11 + 8) >= v6 )
    v13 = v11;
  if ( !v13 )
  {
LABEL_9:
    if ( v6 + 24 < v6 )
      return 3221225506LL;
    v14 = Win32AllocPoolWithQuota(v6 + 24, 0);
    v13 = v14;
    if ( v14 )
    {
      *(_DWORD *)v14 = a3;
      *(_WORD *)(v14 + 4) = 5;
      *(_QWORD *)(v14 + 8) = v6;
      *(_QWORD *)(v14 + 16) = 0LL;
    }
    else
    {
      v13 = 0LL;
    }
    if ( !v13 )
      return 3221225495LL;
    if ( v10 == (__int64 *)(*((_QWORD *)this + 8) + 8LL * *((_QWORD *)this + 9)) )
    {
      if ( !DirectComposition::CGenericPropertyList::push_back(
              (DirectComposition::CGenericMarshaler *)((char *)this + 64),
              (struct DirectComposition::CGenericProperty *)v13) )
      {
        Win32FreePool(v13, v18, v19);
        return 3221225495LL;
      }
    }
    else
    {
      Win32FreePool(*v10, v15, v16);
      *v10 = v13;
    }
  }
  memmove((void *)(v13 + 24), a4, v6);
  v17 = a6;
  *(_QWORD *)(v13 + 16) = v6;
  *(_BYTE *)(v13 + 5) = 1;
  *v17 = 1;
  return 0LL;
}
