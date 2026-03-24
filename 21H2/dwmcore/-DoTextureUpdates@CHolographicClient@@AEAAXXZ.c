/*
 * XREFs of ?DoTextureUpdates@CHolographicClient@@AEAAXXZ @ 0x18025AF4C
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJIII@Z @ 0x18025B210 (-FrameUpdate@CHolographicClient@@UEAAJIII@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xxxq_EventWriteTransfer @ 0x1801A6D58 (McTemplateU0xxxq_EventWriteTransfer.c)
 *     McTemplateU0xxxx_EventWriteTransfer @ 0x1802583E0 (McTemplateU0xxxx_EventWriteTransfer.c)
 *     ?RemoveAt@?$DynArray@UTextureUpdate@CHolographicClient@@$0A@@@QEAAJI@Z @ 0x18025C590 (-RemoveAt@-$DynArray@UTextureUpdate@CHolographicClient@@$0A@@@QEAAJI@Z.c)
 *     McTemplateU0f_EventWriteTransfer @ 0x18025C6EC (McTemplateU0f_EventWriteTransfer.c)
 */

void __fastcall CHolographicClient::DoTextureUpdates(CHolographicClient *this)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  unsigned int **v4; // rsi
  DWORD v5; // eax
  __int64 v6; // rcx
  DWORD v7; // ebp
  __int64 i; // rdi
  int v9; // [rsp+28h] [rbp-10h]
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 62);
  v3 = ++qword_18034BDC0;
  if ( !v2 )
    goto LABEL_16;
  v4 = (unsigned int **)((char *)this + 224);
  do
  {
    v5 = WaitForSingleObject(*((HANDLE *)*v4 + 1), 0);
    v7 = v5;
    if ( !v5 )
    {
      ++qword_18034BDB8;
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 3) + 56LL))(
          *((_QWORD *)this + 3),
          **v4,
          *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i));
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 192LL))(
        *((_QWORD *)this + 3),
        *((_QWORD *)*v4 + 2));
LABEL_10:
      DynArray<CHolographicClient::TextureUpdate,0>::RemoveAt(v4);
      goto LABEL_11;
    }
    if ( v5 == -1 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
      {
        v9 |= v5;
        McTemplateU0xxxq_EventWriteTransfer(
          v6,
          &EVTDESC_HOLOGRAPHICCLIENT_TEXTUREUPDATEWAITFAILED,
          qword_18034BDC0,
          qword_18034BDB8,
          v2);
      }
      goto LABEL_10;
    }
LABEL_11:
    v2 = *((_DWORD *)this + 62);
  }
  while ( v7 == -1 && v2 );
  QueryPerformanceCounter(&PerformanceCount);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
    McTemplateU0f_EventWriteTransfer();
  v3 = qword_18034BDC0;
LABEL_16:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
    McTemplateU0xxxx_EventWriteTransfer(v3 - qword_18034BDB8, &EVTDESC_HOLOGRAPHICCLIENT_TEXTUREUPDATECOUNT);
}
