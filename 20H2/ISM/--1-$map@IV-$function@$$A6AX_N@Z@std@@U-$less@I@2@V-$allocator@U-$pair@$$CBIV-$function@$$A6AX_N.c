/*
 * XREFs of ??1?$map@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@@std@@QEAA@XZ @ 0x180068FF4
 * Callers:
 *     _MPC3DStateHelper::MPC3DStateHelper_::_1_::dtor$2 @ 0x18004E2E1 (_MPC3DStateHelper--MPC3DStateHelper_--_1_--dtor$2.c)
 *     _MPC3DStateHelper::MPC3DStateHelper_::_1_::dtor$3 @ 0x18004E2F7 (_MPC3DStateHelper--MPC3DStateHelper_--_1_--dtor$3.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@@Z @ 0x180068D6C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@PEAX@st.c)
 */

void __fastcall std::map<unsigned int,std::function<void (bool)>>::~map<unsigned int,std::function<void (bool)>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::function<void (bool)>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x68);
}
