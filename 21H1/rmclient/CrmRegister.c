/*
 * XREFs of CrmRegister @ 0x180003AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?CrmpRegistrationContextCleanup@@YAXPEAU_CRMP_REGISTRATION_CONTEXT@@@Z @ 0x1800012E8 (-CrmpRegistrationContextCleanup@@YAXPEAU_CRMP_REGISTRATION_CONTEXT@@@Z.c)
 *     ?CrmpRegistrationContextStart@@YAJPEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_CLIENT_ID@@PEAG@Z @ 0x180003B40 (-CrmpRegistrationContextStart@@YAJPEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_CLIENT_ID@@PEAG@Z.c)
 */

__int64 __fastcall CrmRegister(struct _CRMP_REGISTRATION_CONTEXT **a1, unsigned int a2, __int64 a3)
{
  struct _CRMP_REGISTRATION_CONTEXT *Heap; // rax
  struct _CRMP_REGISTRATION_CONTEXT *v7; // rbx
  int v8; // esi

  Heap = (struct _CRMP_REGISTRATION_CONTEXT *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
  v7 = Heap;
  if ( !Heap )
    return 3221225495LL;
  *(_OWORD *)Heap = 0LL;
  *(_DWORD *)Heap = 305;
  v8 = CrmpRegistrationContextStart(Heap, a2, a3);
  if ( v8 < 0 )
  {
    CrmpRegistrationContextCleanup(v7);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    return (unsigned int)v8;
  }
  else
  {
    *a1 = v7;
    return 0LL;
  }
}
