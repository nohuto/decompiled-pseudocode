/*
 * XREFs of ?DevQueryResultCallback@@YAXPEAUHDEVQUERY__@@PEAXPEBU_DEV_QUERY_RESULT_ACTION_DATA@@@Z @ 0x1800BC520
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18002A740 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCOnDeviceWorkItem@@PEAV312@1@Z @ 0x1800B9BA4 (-NewNode@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@.c)
 */

void __fastcall DevQueryResultCallback(
        struct HDEVQUERY__ *a1,
        __int64 *a2,
        const struct _DEV_QUERY_RESULT_ACTION_DATA *a3)
{
  const unsigned __int16 *v4; // rbp
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  char *v7; // rax
  _QWORD *v8; // rbx
  __int64 *v9; // rax
  __int64 **v10; // rcx
  char *v11; // [rsp+68h] [rbp+10h] BYREF

  if ( *(_DWORD *)a3 )
  {
    if ( *(_DWORD *)a3 == 1 && *((_DWORD *)a3 + 2) == 1 )
    {
      v4 = (const unsigned __int16 *)*((_QWORD *)a3 + 2);
      v5 = -1LL;
      do
        ++v5;
      while ( v4[v5] );
      v6 = v5 + 1;
      if ( v5 + 1 >= v5 && is_mul_ok(v6, 2uLL) )
      {
        v7 = (char *)CoTaskMemAlloc(2 * v6);
        v11 = v7;
        if ( v7 )
        {
          StringCchCopyNExW(v7, v5 + 1, v4, v5);
          v8 = (_QWORD *)*a2;
          v9 = ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::NewNode(
                 *a2,
                 (__int64 *)&v11,
                 *(_QWORD *)(*a2 + 8));
          v10 = (__int64 **)v8[1];
          if ( v10 )
            *v10 = v9;
          else
            *v8 = v9;
          v8[1] = v9;
        }
      }
    }
  }
  else
  {
    *((_DWORD *)a2 + 2) = *((_DWORD *)a3 + 2);
  }
  CoTaskMemFree(0LL);
}
