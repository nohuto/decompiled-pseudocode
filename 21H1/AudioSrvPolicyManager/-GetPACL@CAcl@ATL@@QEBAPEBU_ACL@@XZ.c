/*
 * XREFs of ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x180038E40
 * Callers:
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18003A334 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18003B230 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000F974 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x18003BB9C (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

const struct _ACL *__fastcall ATL::CAcl::GetPACL(ATL::CAcl *this)
{
  unsigned int v2; // ebp
  unsigned int v3; // r14d
  DWORD v4; // esi
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  struct _ACL *v7; // rax
  int v8; // r14d
  unsigned __int64 i; // rsi
  __int64 v10; // rax
  __int64 v11; // r15
  DWORD nAceListLength; // ebx
  void *v13; // rax
  int Error; // ebx
  int v16; // ebx

  if ( !*((_QWORD *)this + 1) && !*((_BYTE *)this + 16) )
  {
    v2 = *((_DWORD *)this + 8);
    v3 = 0;
    v4 = 8;
    if ( v2 )
    {
      v5 = 0LL;
      while ( v5 < *((_QWORD *)this + 4) )
      {
        _mm_lfence();
        v6 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v5);
        if ( v6 )
          v4 += (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        ++v3;
        ++v5;
        if ( v3 >= v2 )
          goto LABEL_9;
      }
LABEL_18:
      ATL::AtlThrowImpl(-2147024809);
    }
LABEL_9:
    v7 = (struct _ACL *)malloc(v4);
    *((_QWORD *)this + 1) = v7;
    if ( !v7 )
      ATL::AtlThrowImpl(-2147024882);
    if ( !InitializeAcl(v7, v4, *((_DWORD *)this + 5)) )
    {
      Error = ATL::AtlHresultFromLastError();
      free(*((void **)this + 1));
      *((_QWORD *)this + 1) = 0LL;
      ATL::AtlThrowImpl(Error);
    }
    (*(void (__fastcall **)(ATL::CAcl *))(*(_QWORD *)this + 40LL))(this);
    v8 = 0;
    if ( v2 )
    {
      for ( i = 0LL; i < *((_QWORD *)this + 4); ++i )
      {
        _mm_lfence();
        v10 = *((_QWORD *)this + 3);
        v11 = *(_QWORD *)(v10 + 8 * i);
        if ( !v11
          || (nAceListLength = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 16LL))(*(_QWORD *)(v10 + 8 * i)),
              v13 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11),
              !AddAce(*((PACL *)this + 1), *((_DWORD *)this + 5), 0xFFFFFFFF, v13, nAceListLength)) )
        {
          v16 = ATL::AtlHresultFromLastError();
          free(*((void **)this + 1));
          *((_QWORD *)this + 1) = 0LL;
          ATL::AtlThrowImpl(v16);
        }
        if ( ++v8 >= v2 )
          return (const struct _ACL *)*((_QWORD *)this + 1);
      }
      goto LABEL_18;
    }
  }
  return (const struct _ACL *)*((_QWORD *)this + 1);
}
