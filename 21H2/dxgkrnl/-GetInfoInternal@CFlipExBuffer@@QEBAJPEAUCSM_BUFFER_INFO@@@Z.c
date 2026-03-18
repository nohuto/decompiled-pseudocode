/*
 * XREFs of ?GetInfoInternal@CFlipExBuffer@@QEBAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C001C8E8
 * Callers:
 *     ?GetInfo@CFlipExBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C001C8D0 (-GetInfo@CFlipExBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0078BA8 (-EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     wcsrchr_0 @ 0x1C002B1CF (wcsrchr_0.c)
 */

__int64 __fastcall CFlipExBuffer::GetInfoInternal(CFlipExBuffer *this, struct CSM_BUFFER_INFO *a2)
{
  unsigned int v4; // eax
  void *v6; // rax
  PROCESSINFOCLASS v7; // edi
  NTSTATUS v8; // eax
  __int64 v9; // r9
  const wchar_t **v10; // rax
  const wchar_t **v11; // rbx
  wchar_t *v12; // rax
  wchar_t *v13; // rdx
  _WORD *v14; // rcx
  __int64 v15; // r8
  signed __int64 v16; // rdx
  __int16 v17; // ax
  _WORD *v18; // rax
  _CLIENT_ID ClientId; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ProcessInformationLength; // [rsp+A0h] [rbp+30h] BYREF
  void *ProcessHandle; // [rsp+A8h] [rbp+38h] BYREF

  *(_DWORD *)a2 = 2;
  *((_QWORD *)a2 + 1) = *((_QWORD *)this + 2);
  *((_OWORD *)a2 + 1) = *((_OWORD *)this + 3);
  *((_OWORD *)a2 + 2) = *((_OWORD *)this + 4);
  *((_OWORD *)a2 + 3) = *((_OWORD *)this + 5);
  *((_OWORD *)a2 + 4) = *((_OWORD *)this + 6);
  *((_OWORD *)a2 + 5) = *((_OWORD *)this + 7);
  *((_OWORD *)a2 + 6) = *((_OWORD *)this + 8);
  *((_OWORD *)a2 + 7) = *((_OWORD *)this + 9);
  *((_OWORD *)a2 + 8) = *((_OWORD *)this + 10);
  *((_OWORD *)a2 + 9) = *((_OWORD *)this + 11);
  *((_QWORD *)a2 + 145) = *((_QWORD *)this + 40);
  *((_QWORD *)a2 + 146) = 0LL;
  *((_QWORD *)a2 + 147) = 0LL;
  *((_DWORD *)a2 + 40) = 0;
  *((_DWORD *)a2 + 41) = *((_DWORD *)this + 68);
  v4 = *((_DWORD *)this + 68);
  if ( v4 )
  {
    if ( v4 <= 1 )
      goto LABEL_3;
    v6 = (void *)*((unsigned int *)this + 158);
    if ( !(_DWORD)v6 )
      goto LABEL_3;
    ProcessHandle = 0LL;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ClientId.UniqueProcess = v6;
    ClientId.UniqueThread = 0LL;
    if ( ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) < 0 )
      goto LABEL_3;
    v7 = ProcessImageFileNameWin32;
    ProcessInformationLength = 0;
    v8 = ZwQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, 0LL, 0, &ProcessInformationLength);
    if ( v8 < 0 )
    {
      if ( v8 == -1073741820 )
        goto LABEL_9;
      v7 = ProcessImageFileName;
      v8 = ZwQueryInformationProcess(ProcessHandle, ProcessImageFileName, 0LL, 0, &ProcessInformationLength);
    }
    if ( v8 != -1073741820 )
    {
LABEL_22:
      ZwClose(ProcessHandle);
LABEL_3:
      *((_DWORD *)a2 + 40) = *(_DWORD *)(*((_QWORD *)this + 32) + 16LL);
      return 0LL;
    }
LABEL_9:
    if ( ProcessInformationLength > 0x10 )
    {
      v10 = (const wchar_t **)operator new[](ProcessInformationLength + 2LL, 0x624D5343u, 256LL, v9);
      v11 = v10;
      if ( v10 )
      {
        if ( ZwQueryInformationProcess(ProcessHandle, v7, v10, ProcessInformationLength, 0LL) >= 0 )
        {
          v12 = wcsrchr_0(v11[1], 0x5Cu);
          if ( v12 )
            v13 = v12 + 1;
          else
            v13 = (wchar_t *)v11[1];
          v14 = (_WORD *)((char *)a2 + 1184);
          v15 = 64LL;
          v16 = (char *)v13 - ((char *)a2 + 1184);
          do
          {
            if ( v15 == -2147483582 )
              break;
            v17 = *(_WORD *)((char *)v14 + v16);
            if ( !v17 )
              break;
            *v14++ = v17;
            --v15;
          }
          while ( v15 );
          v18 = v14 - 1;
          if ( v15 )
            v18 = v14;
          *v18 = 0;
        }
        ExFreePoolWithTag(v11, 0);
      }
    }
    goto LABEL_22;
  }
  return 0LL;
}
