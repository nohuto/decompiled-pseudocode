/*
 * XREFs of ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x1800D3D54
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800D47B8 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 * Callees:
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180018B00 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002C1C0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppAudioSessionId::Initialize(
        CAppAudioSessionId *this,
        struct IAudioProcess *a2,
        const struct _GUID *a3,
        int a4)
{
  int v7; // ebx
  __int64 v8; // rax
  GUID v9; // xmm0
  _WORD *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  _WORD *v13; // rax

  if ( a4 )
  {
    if ( !a3 )
      goto LABEL_3;
    v8 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v8 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( !v8 )
    {
LABEL_3:
      v7 = -2147024809;
LABEL_20:
      AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 371, v7);
      return (unsigned int)v7;
    }
  }
  if ( a3 )
    v9 = *a3;
  else
    v9 = GUID_00000000_0000_0000_0000_000000000000;
  *((GUID *)this + 1) = v9;
  if ( !a4 )
  {
    v10 = (_WORD *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 72LL))(a2);
    v11 = -1LL;
    if ( v10 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( v10[v12] );
    }
    else
    {
      LODWORD(v12) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)this + 1, v10, v12);
    v13 = (_WORD *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 80LL))(a2);
    if ( v13 )
    {
      do
        ++v11;
      while ( v13[v11] );
    }
    else
    {
      LODWORD(v11) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)this, v13, v11);
  }
  *((_DWORD *)this + 10) = a4;
  v7 = CAppAudioSessionId::CalculateStaticId((const GUID *)this);
  if ( v7 < 0 )
    goto LABEL_20;
  return (unsigned int)v7;
}
