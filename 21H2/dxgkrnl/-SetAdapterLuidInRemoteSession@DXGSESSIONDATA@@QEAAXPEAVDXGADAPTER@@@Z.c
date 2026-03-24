/*
 * XREFs of ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0020098
 * Callers:
 *     DxgkGetAdapter @ 0x1C0178970 (DxgkGetAdapter.c)
 *     DxgkReleaseAdapter @ 0x1C0178B10 (DxgkReleaseAdapter.c)
 * Callees:
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C014FDD4 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C014FF10 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 */

void __fastcall DXGSESSIONDATA::SetAdapterLuidInRemoteSession(DXGSESSIONDATA *this, struct DXGADAPTER *a2)
{
  int v3; // eax
  int v4; // eax
  __int64 v5; // rax

  if ( a2 )
  {
    if ( *((_DWORD *)this + 4625) == *((_DWORD *)a2 + 79) && *((_DWORD *)this + 4626) == *((_DWORD *)a2 + 80) )
    {
      ++*((_DWORD *)this + 4627);
    }
    else
    {
      *(_QWORD *)((char *)this + 18500) = *(_QWORD *)((char *)a2 + 316);
      *((_DWORD *)this + 4627) = 1;
      DXGSESSIONDATA::AddAdapterToSession(this, (const struct _LUID *)((char *)this + 18500), a2, 0LL);
    }
  }
  else
  {
    v3 = *((_DWORD *)this + 4627);
    if ( !v3 )
    {
      v5 = WdLogNewEntry5_WdAssertion(this, 0LL);
      *(_QWORD *)(v5 + 24) = 251LL;
      WdLogEvent5_WdAssertion(v5);
      v3 = *((_DWORD *)this + 4627);
    }
    v4 = v3 - 1;
    *((_DWORD *)this + 4627) = v4;
    if ( !v4 )
    {
      DXGSESSIONDATA::RemoveAdapterFromSession(this, (const struct _LUID *)((char *)this + 18500));
      *(_QWORD *)((char *)this + 18500) = 0LL;
    }
  }
}
