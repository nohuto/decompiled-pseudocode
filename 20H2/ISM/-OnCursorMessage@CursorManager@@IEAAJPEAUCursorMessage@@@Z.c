/*
 * XREFs of ?OnCursorMessage@CursorManager@@IEAAJPEAUCursorMessage@@@Z @ 0x180186EE8
 * Callers:
 *     ?OnCoreMessageStatic@CursorManager@@SAJPEAX0H@Z @ 0x180186ED0 (-OnCoreMessageStatic@CursorManager@@SAJPEAX0H@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?OnCursorTargetChanged@CursorManager@@IEAAJPEAUCursorMessage@@@Z @ 0x180187080 (-OnCursorTargetChanged@CursorManager@@IEAAJPEAUCursorMessage@@@Z.c)
 */

__int64 __fastcall CursorManager::OnCursorMessage(CursorManager *this, struct CursorMessage *a2)
{
  __int64 v2; // r8
  int v3; // ebx
  __int64 v4; // rdx
  __int128 v5; // xmm0
  __int64 (__fastcall ***v6)(_QWORD, __int64, int *); // rcx
  __int64 v7; // xmm1_8
  __int64 v8; // rdx
  __int64 (__fastcall **v9)(_QWORD, __int64, int *); // rax
  int v11[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *(_BYTE *)a2 )
  {
    if ( *(_BYTE *)a2 == 1 )
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 7) + 8LL))(
             *((_QWORD *)this + 7),
             *(_QWORD *)((char *)a2 + 4),
             *((unsigned int *)a2 + 4));
      if ( v3 < 0 )
      {
        v4 = 183LL;
        goto LABEL_23;
      }
    }
    else if ( *(_BYTE *)a2 == 2 )
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 7) + 32LL))(
             *((_QWORD *)this + 7),
             *(_QWORD *)((char *)a2 + 4),
             *((_QWORD *)a2 + 2));
      if ( v3 < 0 )
      {
        v4 = 187LL;
        goto LABEL_23;
      }
    }
    else
    {
      v2 = (unsigned int)*(unsigned __int8 *)a2 - 3;
      switch ( *(_BYTE *)a2 )
      {
        case 3:
          LODWORD(v2) = *((unsigned __int8 *)a2 + 16);
          v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 7) + 16LL))(
                 *((_QWORD *)this + 7),
                 *(_QWORD *)((char *)a2 + 4),
                 v2);
          if ( v3 < 0 )
          {
            v4 = 191LL;
            goto LABEL_23;
          }
          break;
        case 6:
          v3 = CursorManager::OnCursorTargetChanged(this, a2);
          if ( v3 < 0 )
          {
            v4 = 195LL;
            goto LABEL_23;
          }
          break;
        case 8:
          LOBYTE(a2) = *((_BYTE *)a2 + 16);
          v3 = (*(__int64 (__fastcall **)(_QWORD, struct CursorMessage *))(**((_QWORD **)this + 7) + 40LL))(
                 *((_QWORD *)this + 7),
                 a2);
          if ( v3 < 0 )
          {
            v4 = 199LL;
            goto LABEL_23;
          }
          break;
        case 9:
          v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 7) + 48LL))(
                 *((_QWORD *)this + 7),
                 *(_QWORD *)((char *)a2 + 4),
                 *((unsigned int *)a2 + 4));
          if ( v3 < 0 )
          {
            v4 = 203LL;
            goto LABEL_23;
          }
          break;
        default:
          v3 = -2147418113;
          v4 = 207LL;
LABEL_23:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v4,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
            (const char *)(unsigned int)v3);
          return (unsigned int)v3;
      }
    }
  }
  else
  {
    v5 = *((_OWORD *)a2 + 1);
    v6 = (__int64 (__fastcall ***)(_QWORD, __int64, int *))*((_QWORD *)this + 7);
    v7 = *((_QWORD *)a2 + 4);
    v8 = *(_QWORD *)((char *)a2 + 4);
    *(_OWORD *)v11 = v5;
    v9 = *v6;
    v12 = v7;
    v3 = (*v9)(v6, v8, v11);
    if ( v3 < 0 )
    {
      v4 = 179LL;
      goto LABEL_23;
    }
  }
  return 0LL;
}
