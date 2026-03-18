/*
 * XREFs of AllocAce @ 0x1C008CA40
 * Callers:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C008C5C0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     InitSecurity @ 0x1C0299470 (InitSecurity.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C008F360 (Win32AllocPoolWithQuota.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

char *__fastcall AllocAce(void *Src, char a2, char a3, int a4, PSID Sid, _DWORD *a6)
{
  ULONG v8; // r13d
  ULONG v9; // esi
  size_t v10; // rdi
  int v11; // ebp
  int v12; // eax
  char *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  char *v17; // rdx

  v8 = RtlLengthSid(Sid);
  v9 = v8 + 8;
  if ( Src )
  {
    v10 = (unsigned int)*a6;
    if ( v9 + (unsigned int)v10 >= (unsigned int)v10 )
    {
      v11 = -1073741637;
      v12 = qword_1C0258BF0 ? qword_1C0258BF0() : -1073741637;
      v13 = v12 >= 0 && qword_1C0258BF8 ? (char *)qword_1C0258BF8(41LL, v9 + (unsigned int)v10, 1702064981LL) : 0LL;
      if ( v13 )
      {
        memmove(v13, Src, v10);
        if ( qword_1C0258BC0 )
          v11 = qword_1C0258BC0(v15, v14, v16);
        if ( v11 >= 0 )
        {
          if ( qword_1C0258BC8 )
            qword_1C0258BC8(Src);
        }
        goto LABEL_14;
      }
    }
  }
  else
  {
    LODWORD(v10) = 0;
    v13 = (char *)Win32AllocPoolWithQuota(v9, 1702064981LL);
    if ( v13 )
    {
LABEL_14:
      *a6 = v9 + v10;
      v17 = &v13[(unsigned int)v10];
      *v17 = a2;
      v17[1] = a3;
      *((_WORD *)v17 + 1) = v9;
      *((_DWORD *)v17 + 1) = a4;
      RtlCopySid(v8, v17 + 8, Sid);
      return v13;
    }
  }
  return 0LL;
}
