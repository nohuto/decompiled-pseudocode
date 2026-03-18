/*
 * XREFs of ??0PROXYPORT@@QAE@_K@Z @ 0x21026A
 * Callers:
 *     ?bInit@UMPDOBJ@@QAEHXZ @ 0x1F428A (-bInit@UMPDOBJ@@QAEHXZ.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?SecureConnectPort@PROXYPORT@@QAEJPAPAXPAU_UNICODE_STRING@@PAU_SECURITY_QUALITY_OF_SERVICE@@PAU_PORT_VIEW@@PAXPAU_REMOTE_PORT_VIEW@@PAK46@Z @ 0x21076B (-SecureConnectPort@PROXYPORT@@QAEJPAPAXPAU_UNICODE_STRING@@PAU_SECURITY_QUALITY_OF_SERVICE@@PAU_.c)
 */

PROXYPORT *__thiscall PROXYPORT::PROXYPORT(PROXYPORT *this, unsigned __int64 a2)
{
  _DWORD *v3; // eax
  PKTHREAD CurrentThread; // eax
  struct _KTHREAD *v5; // eax
  PACCESS_TOKEN v6; // edi
  struct _KPROCESS *CurrentProcess; // eax
  NTSTATUS v8; // ebx
  int v9; // eax
  PROXYPORT *v10; // ecx
  int v11; // edi
  void **v12; // eax
  void *v13; // ecx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-288h] BYREF
  union _LARGE_INTEGER MaximumSize; // [esp+28h] [ebp-270h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+34h] [ebp-264h] BYREF
  ULONG MaxMessageLength; // [esp+3Ch] [ebp-25Ch] BYREF
  int v19; // [esp+40h] [ebp-258h]
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [esp+44h] [ebp-254h] BYREF
  struct _LUID AuthenticationId; // [esp+48h] [ebp-250h] BYREF
  struct _PORT_VIEW v22; // [esp+50h] [ebp-248h] BYREF
  int v23; // [esp+68h] [ebp-230h]
  int ProcessInformation; // [esp+6Ch] [ebp-22Ch] BYREF
  PVOID P; // [esp+70h] [ebp-228h] BYREF
  PVOID TokenInformation; // [esp+74h] [ebp-224h] BYREF
  unsigned __int8 CopyOnOpen; // [esp+7Ah] [ebp-21Eh] BYREF
  unsigned __int8 EffectiveOnly; // [esp+7Bh] [ebp-21Dh] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v29; // [esp+7Ch] [ebp-21Ch] BYREF
  wchar_t Dst[262]; // [esp+88h] [ebp-210h] BYREF

  memset(&v22, 0, sizeof(v22));
  *(_WORD *)(&v29.EffectiveOnly + 1) = 0;
  MaxMessageLength = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  ProcessInformation = 0;
  memset(Dst, 0, 0x208u);
  *(_DWORD *)this = 0;
  if ( ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessSessionInformation, &ProcessInformation, 4u, 0) >= 0 )
  {
    v19 = ProcessInformation;
    v29.Length = 0;
    v29.ImpersonationLevel = SecurityImpersonation;
    *(_WORD *)&v29.ContextTrackingMode = 257;
    v3 = PALLOCMEM2(0x24u, 1953525831, 1);
    *(_DWORD *)this = v3;
    if ( v3 )
    {
      v3[8] = 0;
      *(_DWORD *)(*(_DWORD *)this + 12) = 0;
      *(_DWORD *)(*(_DWORD *)this + 16) = 0;
      *(_DWORD *)(*(_DWORD *)this + 28) = 0;
      **(_DWORD **)this = 0;
      *(_DWORD *)(*(_DWORD *)this + 20) = 0;
      *(_DWORD *)(*(_DWORD *)this + 24) = 0;
      *(_DWORD *)(*(_DWORD *)this + 8) = 0;
      MaximumSize.QuadPart = 0x400000LL;
      ObjectAttributes.Length = 24;
      ObjectAttributes.RootDirectory = 0;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0;
      ObjectAttributes.SecurityDescriptor = 0;
      ObjectAttributes.SecurityQualityOfService = 0;
      if ( ZwCreateSection(&v22.SectionHandle, 6u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0) < 0 )
        goto LABEL_21;
      P = 0;
      AuthenticationId.LowPart = 0;
      AuthenticationId.HighPart = 0;
      TokenInformation = 0;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned __int8)PsIsThreadImpersonating(CurrentThread)
        || (v23 = 1,
            CopyOnOpen = 0,
            EffectiveOnly = 0,
            ImpersonationLevel = SecurityAnonymous,
            v5 = KeGetCurrentThread(),
            (v6 = PsReferenceImpersonationToken(v5, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel)) == 0) )
      {
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess();
        v6 = PsReferencePrimaryToken(CurrentProcess);
        v23 = 0;
      }
      v8 = SeQueryAuthenticationIdToken(v6, &AuthenticationId);
      if ( v8 >= 0 )
      {
        v8 = SeQueryInformationToken(v6, TokenIntegrityLevel, &TokenInformation);
        if ( v8 >= 0 )
          v8 = SeQueryInformationToken(v6, TokenUser, &P);
      }
      if ( v23 )
        PsDereferenceImpersonationToken(v6);
      else
        PsDereferencePrimaryToken(v6);
      if ( v8 < 0 )
        goto LABEL_21;
      v9 = (int)TokenInformation;
      v22.Length = 24;
      v22.SectionOffset = 0;
      v22.ViewSize = 0x400000;
      v22.ViewBase = 0;
      v22.ViewRemoteBase = 0;
      if ( (unsigned int)TokenInformation < 0x2000 )
      {
        v9 = 0x2000;
        TokenInformation = (PVOID)0x2000;
      }
      _swprintf_s(
        Dst,
        0x104u,
        L"%s_%x_%x_%x_%x",
        L"\\RPC Control\\UmpdProxy",
        v19,
        AuthenticationId.LowPart,
        AuthenticationId.HighPart,
        v9);
      RtlInitUnicodeString(&DestinationString, Dst);
      v11 = PROXYPORT::SecureConnectPort(
              v10,
              *(void ***)this,
              &DestinationString,
              &v29,
              &v22,
              *(PSID *)P,
              (struct _REMOTE_PORT_VIEW *)v10,
              &MaxMessageLength,
              v10,
              (unsigned int *)v10);
      if ( v11 >= 0 )
      {
        *(_DWORD *)(*(_DWORD *)this + 8) = MmSecureVirtualMemory(v22.ViewBase, v22.ViewSize, 4u);
        if ( *(_DWORD *)(*(_DWORD *)this + 8) )
        {
          *(_DWORD *)(*(_DWORD *)this + 4) = v22.SectionHandle;
          *(_DWORD *)(*(_DWORD *)this + 12) = v22.ViewBase;
          *(_DWORD *)(*(_DWORD *)this + 16) = v22.ViewSize;
          *(_DWORD *)(*(_DWORD *)this + 20) = v22.ViewRemoteBase;
          *(_DWORD *)(*(_DWORD *)this + 24) = *(_DWORD *)(*(_DWORD *)this + 20) - *(_DWORD *)(*(_DWORD *)this + 12);
          *(_DWORD *)(*(_DWORD *)this + 32) = 1;
        }
      }
      ExFreePoolWithTag(P, 0);
      if ( v11 < 0 || !*(_DWORD *)(*(_DWORD *)this + 8) )
      {
LABEL_21:
        if ( v22.SectionHandle )
          ZwClose(v22.SectionHandle);
        v12 = *(void ***)this;
        v13 = **(void ***)this;
        if ( v13 )
        {
          ObfDereferenceObject(v13);
          v12 = *(void ***)this;
        }
        Win32FreePool((PATHOBJ *)v12);
        *(_DWORD *)this = 0;
      }
    }
  }
  return this;
}
