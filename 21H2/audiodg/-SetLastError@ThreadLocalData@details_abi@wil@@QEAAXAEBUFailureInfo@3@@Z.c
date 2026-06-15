/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x14003C4E8
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x14001BDD0 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x1400153EC (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x14003C170 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2)
{
  _WORD *v2; // r8
  int v4; // edi
  _WORD *v6; // rax
  _WORD *v7; // rax
  _DWORD *v8; // rcx
  _DWORD *v9; // r8
  volatile signed __int32 *v10; // rax

  v2 = (_WORD *)*((_QWORD *)this + 3);
  v4 = *((_DWORD *)this + 4);
  if ( v2 )
    goto LABEL_17;
  if ( v4 )
  {
    v6 = wil::details::ProcessHeapAlloc(8u, 0x190uLL);
    *((_QWORD *)this + 3) = v6;
    v2 = v6;
    if ( v6 )
    {
      v7 = v6 + 200;
      *((_DWORD *)this + 8) = 5;
      if ( v2 != v7 )
      {
        do
        {
          *v2 = 80;
          v2 += 40;
        }
        while ( v2 != v7 );
        v2 = (_WORD *)*((_QWORD *)this + 3);
      }
      if ( v2 )
      {
LABEL_17:
        if ( !v4 || (v8 = &v2[40 * *((unsigned __int16 *)this + 16)], v2 == (_WORD *)v8) )
        {
LABEL_14:
          v10 = (volatile signed __int32 *)*((_QWORD *)this + 1);
          *((_WORD *)this + 17) = ((unsigned int)*((unsigned __int16 *)this + 17) + 1)
                                % *((unsigned __int16 *)this + 16);
          wil::details_abi::ThreadLocalFailureInfo::Set(
            (wil::details_abi::ThreadLocalFailureInfo *)(*((_QWORD *)this + 3) + 80LL * *((unsigned __int16 *)this + 17)),
            a2,
            _InterlockedIncrement(v10));
        }
        else
        {
          v9 = v2 + 4;
          while ( *(v9 - 1) <= *((_DWORD *)this + 4) || *v9 != *((_DWORD *)a2 + 1) )
          {
            v9 += 20;
            if ( v9 - 2 == v8 )
              goto LABEL_14;
          }
        }
      }
    }
  }
}
