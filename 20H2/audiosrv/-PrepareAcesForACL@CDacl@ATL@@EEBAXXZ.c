/*
 * XREFs of ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x1800322B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8410 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800C2C34 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ??4?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAAEAV01@AEAV01@@Z @ 0x1800D4F50 (--4-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAAEAV01@AEAV01@@Z.c)
 */

void __fastcall ATL::CDacl::PrepareAcesForACL(ATL::CDacl *this)
{
  unsigned __int64 v1; // r12
  void (__fastcall ***v2)(_QWORD, __int64); // rbx
  ATL::CDacl *v3; // rax
  unsigned __int64 v4; // r13
  unsigned __int64 i; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  _QWORD *v8; // r14
  _QWORD *v9; // rsi
  void (__fastcall ***v10)(_QWORD, __int64); // rax
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rbp
  _BYTE *v13; // rsi
  void (__fastcall ***v14)(_QWORD, __int64); // rcx
  _QWORD *v15; // rsi
  unsigned __int128 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  void (__fastcall ***v20)(_QWORD, __int64); // [rsp+68h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 4);
  v2 = 0LL;
  v20 = 0LL;
  v3 = this;
  v4 = 1LL;
  if ( v1 <= 4 )
  {
    while ( 1 )
    {
LABEL_6:
      v6 = v4 - 1;
      v7 = 0xAAAAAAAAAAAAAAABuLL;
      if ( v4 - 1 >= v1 )
        goto LABEL_30;
      v8 = (_QWORD *)((char *)v3 + 24);
      do
      {
        if ( v6 >= v8[1] )
LABEL_46:
          ATL::AtlThrowImpl(-2147024809);
        v9 = (_QWORD *)(*v8 + 8 * v6);
        v10 = (void (__fastcall ***)(_QWORD, __int64))*v9;
        if ( v2 != (void (__fastcall ***)(_QWORD, __int64))*v9 )
        {
          if ( v2 )
          {
            (**v2)(v2, 1LL);
            v10 = (void (__fastcall ***)(_QWORD, __int64))*v9;
          }
          v2 = v10;
          v20 = v10;
LABEL_13:
          *v9 = 0LL;
          goto LABEL_14;
        }
        if ( &v20 != v9 )
          goto LABEL_13;
LABEL_14:
        v11 = v6;
        if ( v6 < v4 )
          goto LABEL_23;
        while ( 1 )
        {
          v12 = v11 - v4;
          if ( v11 - v4 >= v8[1] )
            goto LABEL_46;
          _mm_lfence();
          v2 = v20;
          v13 = *(_BYTE **)(*v8 + 8 * v12);
          if ( (v13[132] & 0x10) != 0 )
          {
            if ( (*((_BYTE *)v20 + 132) & 0x10) == 0 )
              goto LABEL_42;
          }
          else if ( (*((_BYTE *)v20 + 132) & 0x10) != 0 )
          {
            goto LABEL_23;
          }
          if ( !v13[144] )
            break;
          if ( *((_BYTE *)v20 + 144) )
            goto LABEL_20;
LABEL_42:
          v17 = ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](v8);
          v18 = ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](v8);
          ATL::CAutoPtr<ATL::CDacl::CAccessAce>::operator=(v18, v17);
          v11 -= v4;
          if ( v12 < v4 )
            goto LABEL_23;
        }
        if ( *((_BYTE *)v20 + 144) )
          goto LABEL_23;
LABEL_20:
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)v13 + 32LL))(
               *(_QWORD *)(*v8 + 8 * v12),
               v7)
          && !((unsigned __int8 (__fastcall *)(void (__fastcall ***)(_QWORD, __int64)))(*v2)[4])(v2) )
        {
          goto LABEL_42;
        }
        if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)v13 + 32LL))(v13) )
          ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64)))(*v2)[4])(v2);
LABEL_23:
        if ( v11 >= v8[1] )
          goto LABEL_46;
        v14 = *(void (__fastcall ****)(_QWORD, __int64))(*v8 + 8 * v11);
        v15 = (_QWORD *)(*v8 + 8 * v11);
        if ( v14 == v2 )
        {
          if ( v15 != &v20 )
            goto LABEL_28;
        }
        else
        {
          if ( v14 )
            (**v14)(v14, 1LL);
          *v15 = v2;
LABEL_28:
          v2 = 0LL;
          v20 = 0LL;
        }
        ++v6;
      }
      while ( v6 < v1 );
LABEL_30:
      v16 = v4 * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
      v4 /= 3uLL;
      if ( !(*((_QWORD *)&v16 + 1) >> 1) )
      {
        if ( v2 )
          (**v2)(v2, 1LL);
        return;
      }
      v3 = this;
    }
  }
  for ( i = 4LL; i < v1; i += 2 * i + 1 )
    v4 = i;
  if ( v4 )
  {
    v3 = this;
    goto LABEL_6;
  }
}
