/*
 * XREFs of ?bInit@UMPDOBJ@@QAEHXZ @ 0x1F428A
 * Callers:
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QAEPAUHOBJ__@@PAVOBJECT@@EK@Z @ 0x22A2E (-Insert@HmgInsertObjectHelper@@QAEPAUHOBJ__@@PAVOBJECT@@EK@Z.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?CreateUMPDHeap@UMPDOBJ@@AAEPAU_UMPDHEAP@@XZ @ 0x1F39C5 (-CreateUMPDHeap@UMPDOBJ@@AAEPAU_UMPDHEAP@@XZ.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QAEXXZ @ 0x1F3ADD (-FreeNonCachedUserMem@UMPDOBJ@@QAEXXZ.c)
 *     ??0PROXYPORT@@QAE@_K@Z @ 0x21026A (--0PROXYPORT@@QAE@_K@Z.c)
 */

int __thiscall UMPDOBJ::bInit(UMPDOBJ *this)
{
  int v1; // ebx
  int CurrentProcessWin32Process; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD *v6; // esi
  int v7; // eax
  UMPDOBJ *v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  struct _UMPDHEAP *v12; // eax
  struct _UMPDHEAP *UMPDHeap; // eax
  PKTHREAD v14; // eax
  _DWORD *v15; // edi
  int v16; // eax
  int v17; // ecx
  unsigned __int64 v19; // [esp-8h] [ebp-18h]
  int v20; // [esp+Ch] [ebp-4h] BYREF

  v1 = 0;
  memset(this, 0, 0xECu);
  *((_DWORD *)this + 6) = 1886221639;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  if ( !CurrentProcessWin32Process )
    return 0;
  v6 = (_DWORD *)ThreadWin32Thread;
  if ( !ThreadWin32Thread )
    return 0;
  v7 = PsGetCurrentProcessWin32Process();
  if ( v7 )
    v9 = *(_DWORD *)(v7 + 148);
  else
    v9 = 0;
  *((_DWORD *)this + 58) = v9;
  if ( !v9 )
  {
    if ( (_DWORD *)v6[5] == v6 + 5 )
    {
      v12 = (struct _UMPDHEAP *)v6[7];
      if ( !v12 )
      {
        UMPDHeap = UMPDOBJ::CreateUMPDHeap(v8);
        *((_DWORD *)this + 9) = UMPDHeap;
        v6[7] = UMPDHeap;
        goto LABEL_18;
      }
      *((_DWORD *)v12 + 3) = 0;
    }
    else
    {
      v12 = UMPDOBJ::CreateUMPDHeap(v8);
    }
    *((_DWORD *)this + 9) = v12;
LABEL_18:
    if ( *((_DWORD *)this + 9) )
      goto LABEL_19;
    return 0;
  }
  v10 = v6[8];
  if ( v10 )
  {
    *((_DWORD *)this + 52) = v10;
    *(_DWORD *)(v10 + 28) = 0;
    goto LABEL_11;
  }
  HIDWORD(v19) = v8;
  LODWORD(v19) = v8;
  PROXYPORT::PROXYPORT((PROXYPORT *)&v20, v19);
  v11 = v20;
  if ( !v20 )
    return 0;
  *((_DWORD *)this + 52) = v20;
  v6[8] = v11;
LABEL_11:
  *((_DWORD *)this + 4) = v6;
LABEL_19:
  v20 = 0;
  if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v20, this, 0x11u, 0xAu) )
  {
    *((_DWORD *)this + 53) = KeGetCurrentThread();
    *((_DWORD *)this + 54) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    if ( !*((_DWORD *)this + 58) )
    {
      v14 = KeGetCurrentThread();
      v15 = (_DWORD *)((char *)this + 28);
      v16 = W32GetThreadWin32Thread(v14) + 20;
      v17 = *(_DWORD *)v16;
      if ( *(_DWORD *)(*(_DWORD *)v16 + 4) != v16 )
        __fastfail(3u);
      *v15 = v17;
      v15[1] = v16;
      *(_DWORD *)(v17 + 4) = v15;
      *(_DWORD *)v16 = v15;
    }
    v1 = 1;
  }
  else
  {
    UMPDOBJ::FreeNonCachedUserMem(this);
  }
  if ( v20 )
    _InterlockedDecrement((volatile signed __int32 *)(v20 + 8));
  return v1;
}
